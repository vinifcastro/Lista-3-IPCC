#include <stdio.h>

int main(){
    int m,n,i,ca,la,a, j;
    la=2;
    ca=1;
    a=1;
    scanf("%d %d", &m, &n);
    for(i=1;i<m;i++){
        printf("(%d,%d)", la, ca);
        ca++;
        if(la!=2){
            for(j=1; j<a; j++){
                printf("-");
                printf("(%d,%d)", la, ca);
                ca++;
            }
        }
        if(a<n)a++;
        printf("\n");
        la++;
        ca=1;
    }
    return 0;
}