#include <stdio.h>

int main(){
    int a_1, r, n, i, soma, x;
    scanf("%d %d %d", &a_1, &r, &n);
    soma = a_1;
    for (i = 1; i < n; i++){
        x = a_1 + i*r;
        soma = soma+x;
    }
    printf("%d", soma);
    return 0;
}