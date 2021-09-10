#include <stdio.h>

int main(){
    int i, num, rep;
    scanf("%d %d", &num, &rep);
    if (num%2 != 0) printf("O PRIMEIRO NUMERO NAO E PAR");
    else{
        printf("%d", num);
        for (i = 0; i < (rep-1); i++){
            num = num+2;
            printf(" %d",num);
        }
    }
    return 0;
}