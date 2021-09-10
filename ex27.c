#include <stdio.h>
 
int main(){
    int n, i, seq;
    double k, anterior;
    seq = 1;
    while (1){
        scanf("%d", &n);
        if (n == 0) break;
        for (i=0;i<n;i++){
            scanf("%lf", &k);
            if (i){
                if (anterior < k){
                    seq++;
                }
            }
            anterior = k;
        }
        if (n == 1) seq = n;
        if (seq == n) printf ("ORDENADA\n");
        else printf("DESORDENADA\n");
        seq = 1;
    }
    return 0;
}