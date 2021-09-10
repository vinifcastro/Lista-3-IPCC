#include <stdio.h>

int main(){
    int n, i, soma;
    soma = 1;
    scanf("%d", &n);
    printf ("%d = 1", n);
    for(i=2; i<n; i++){
        if (n%i == 0){
            printf(" + %d", i);
            soma += i;
        }
    }
    printf(" = %d ", soma);
    if(n == soma) printf("(NUMERO PERFEITO)\n");
    else printf("(NUMERO NAO E PERFEITO)\n");
    return 0;
}