#include <stdio.h>

int main(){
    int m,n,i,ca,la,a, j;
    la=1;
    ca=1;
    a=1;
    scanf("%d %d", &m, &n);
    for(i=0;i<m;i++){
        printf("(%d,%d)", la, ca);
        ca++;
        for(j=1; j<n; j++){
            printf("-");
            printf("(%d,%d)", la, ca);
            ca++;
        }
        printf("\n");
        la++;
        ca=1;
    }
    return 0;
}