#include <stdio.h>

int main(){
    int n, i, x, res;
    x = 2;
    i = 1;
    scanf("%d", &n);
    while(i <= (n/2)){ 
        res = x*x;
        printf ("%d^2 = %d\n", x, res);
        x = x + 2;
        i++;
    }
    return 0;
}