#include <stdio.h>

int main(){
    int n, i, x=0;

    scanf("%d", &n);
    if ((n == 0) || (n == 1)){
        printf("NAO PRIMO\n");
        return 0;
    }
    if (n == 2) {
        printf("PRIMO\n");
        return 0;
    }
    if (n < 0){
        printf("Numero invalido!\n");
        return 0;
    }
    for (i = 2; i < n; i++){
        if ((n%i) == 0){
            printf("NAO PRIMO\n");
            return 0;
        }
        if((i==(n-1)) && (n%i != 0)) printf("PRIMO\n");
    }
    return 0;
}