#include <stdio.h>

int main(){
    int k, i;
    double far, cel;

    scanf("%d", &k);

    for(i = 0;i < k; i++){
        scanf("%lf", &far);
        cel = 5*(far-32)/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", far, cel);
    }
    return 0;
}