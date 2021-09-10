#include <stdio.h>
#include <math.h>

int main(){
    double x, n, y, ang;
    int j, k, fat;
    scanf("%lf %lf", &x, &n);
    ang = x;
    j = 0;
    fat = 1;
    k = 0;
    y = 0;
    while (1){
        if (k<=2*j){
            if (j == 0) fat = 1;
            else fat *= k;
            k++;
        }
        else{
            if (j <= n){
                y += ((pow(-1,j))*(pow(x,2*j)))/fat;
            }
            j++;
            if (j>n) break;
        }
    }
    printf ("y(%.2lf) = %.6lf", ang, y);
    return 0;
}