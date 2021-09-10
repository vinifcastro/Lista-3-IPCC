#include <stdio.h>

int main(){
    int change, n, k,i, total;
    scanf("%d",&n);
    total = n;
    change = 1; // 1 - casa branca e 2 - casa preta.
    for(i=0 ; i<63; i++){
        if (change == 1){
            total = total + n;
            change = 2;
        }
        else if (change == 2){
            total = total + (n*2);
            change = 1;
        }
    }
    printf("%d\n", total);
    return 0;
}