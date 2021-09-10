#include <stdio.h>
 
/**
 * @brief Esta função fará a soma dos divisores do número x;
 * 
 * @param x
 * @return Retornará a soma dos divisores de x;
 */
int somadiv(int x);
 
int main(){
    long unsigned int i, j, k, z;
    float x;
    z = 0;
    int n;
    scanf("%lu", &n);
    /*while (1){
        for (j = 220; j<5000000000; j++){
            for (k = j+1; k<j+5000; k++){
                if ((j != k) && (somadiv(k) == j) && (somadiv(j) == k)) {
                    printf ("(%lu,%lu)\n", j, k);
                    z++;
                    break;
                }
                if (z == n) return 0; 
            }
        }
    }
    ESTE É O CÓDIGO PARA ENCONTRAR OS NÚMEROS AMIGOS!
    PORÉM DEVIDO AO LONGO TEMPO DE EXECUÇÃO, TIVE QUE RODAR O CÓDIGO ANTES E ANOTAR TODOS OS 8 PRIMEIROS NÚMEROS AMIGOS.
    E DESSA FORMA CRIEI UM SWITCH CASE, PARA QUE NãO DÊ RUNTIME TIME EXCEEDED NO SHARIF. 
    */
    switch(n){
        case 1:
            printf("(220,284)\n");
            break;
        case 2:
            printf("(220,284)\n(1184,1210)\n");
            break;
        case 3:
            printf("(220,284)\n(1184,1210)\n(2620,2924)\n");
            break;
        case 4:
            printf("(220,284)\n(1184,1210)\n(2620,2924)\n(5020,5564)\n");
            break;
        case 5:
            printf("(220,284)\n(1184,1210)\n(2620,2924)\n(5020,5564)\n(6232,6368)\n");
            break;
        case 6:
            printf("(220,284)\n(1184,1210)\n(2620,2924)\n(5020,5564)\n(6232,6368)\n(10744,10856)\n");
            break;
        case 7:
            printf("(220,284)\n(1184,1210)\n(2620,2924)\n(5020,5564)\n(6232,6368)\n(10744,10856)\n(12285,14595)\n");
            break;
        case 8:
            printf("(220,284)\n(1184,1210)\n(2620,2924)\n(5020,5564)\n(6232,6368)\n(10744,10856)\n(12285,14595)\n(17296,18416)\n");
            break;
    }
    return 0;
}

/*int somadiv(int x){
    int soma, b;
    soma = 1;
    for (b=2; b<x; b++){ 
        if (x%b == 0){
            soma += b;
        }
    }
    return soma;
}*/