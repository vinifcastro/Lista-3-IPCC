#include <stdio.h>
#include <math.h>

/**
 * @brief Função que calcula o fatorial de um número;
 * 
 * @param x Numero a ser calculado o fatorial;
 * @return Retorna o valor do fatorial;
 */
unsigned long int fatorial(int x);

int main(){
    double x, ang, cos;
    int n, i;
    cos = 0;
    scanf("%lf  %d", &ang, &n);
    x=ang;
    for (i=0; i<=n; i++){
        cos += (pow(-1,i)*pow(x,2*i+1))/(double)fatorial(2*i+1);
    }
    printf ("seno(%.2lf) = %.8lf", ang, cos);
    return 0;
}

unsigned long int fatorial(int x){
    unsigned long int fat, k;
    fat = 1;
    for (k=x; k>1; k--){
        fat *= k;
    }
    return fat;
}