#include <stdio.h>

int main(){
    int n, i, total, j, soma, k, primeiroimpar;
    j = soma = k = 0;
    scanf("%d", &n);
    for(i=1; i < (n+1); i++){
        total = i*i*i;
        while(1){
            soma = soma + ((2*k)+1);
            if (soma>total){
                j++;
                k = j;
                soma = 0;
            }
            else if (soma == total){
                primeiroimpar = (2*j) + 1;
                soma = 0;
                break;
            }
            else k++;
        }
        printf("%d*%d*%d = %d", i, i, i, primeiroimpar);
        while(soma<(total - primeiroimpar)){
            soma = soma + primeiroimpar+2;
            printf("+%d", primeiroimpar+2);
            primeiroimpar = primeiroimpar+2;
        }
        printf("\n");
        soma = 0;
    }
    return 0;
}