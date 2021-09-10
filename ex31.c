#include <stdio.h>
#include <math.h>

/**
 * @brief Função que calcula o fatorial de um número;
 * 
 * @param x Numero a ser calculado o fatorial;
 * @return Retorna o valor do fatorial;
 */
int fatorial(int x);

int main(){
    double x, ang, cos;
    int n, i;
    scanf("%lf  %d", &ang, &n);
    x=ang;
    for (i=0; i<=n; i++){
        cos += (pow(-1,i)*pow(x,2*i))/fatorial(2*i);
    }
    printf ("cos(%.2lf) = %.6lf", ang, cos);
    return 0;
}

int fatorial(int x){
    int fat, k;
    fat = 1;
    for (k=x; k>1; k--){
        fat *= k;
    }
    return fat;
}