#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, x, y, z, mmc, i;
    i = 2;
    mmc = 1;
    scanf("%d %d %d", &x, &y, &z);
    a=x;
    b=y;
    c=z;
    while(1){
        if((x%i == 0) || (y%i == 0) || (z%i == 0)){
            if(x%i == 0) a = x/i;
            if(y%i == 0) b = y/i;
            if(z%i == 0) c = z/i;
            printf("%d %d %d :%d\n", x, y, z, i);
            x = a;
            y = b;
            z = c;
            mmc = mmc*i;
            i=1;
        }
        i++;
        if ((x == 1) && (y == 1) && (z == 1)) break;   
    }
    printf("MMC: %d\n", mmc);
    return 0;
}