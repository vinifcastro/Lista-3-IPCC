#include <stdio.h>
#include <math.h>

int main(){
    double x, n, expoeuler, ang;
    int j, k, fat;
    scanf("%lf %lf", &x, &n);
    ang = x;
    j = 0;
    fat = 1;
    k = 0;
    expoeuler = 0;
    while (1){
        if (k<=j){
            if (j == 0) fat = 1;
            else fat *= k;
            k++;
        }
        else{
            if (j <= n){
                expoeuler += (pow(x,j))/fat;
            }
            j++;
            if (j>n) break;
        }
    }
    printf ("e^%.2lf = %.6lf", ang, expoeuler);
    return 0;
}