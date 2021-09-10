#include <stdio.h>

int main(){
    int n, k, f;
    scanf("%d", &n);
    f = 1;
    if(n == 0) {
        f = 1;
    }
    else{
        for(k = 1; k < (n+1); k++){
            f = f*k;
        }
    }
    printf("%d! = %d", n, f);
    return 0;
}