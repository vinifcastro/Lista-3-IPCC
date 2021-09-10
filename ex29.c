#include <stdio.h>

int main(){
    double x, den, i;
    den = 1;
    scanf("%lf", &x);
    while (fmod(x,1) != 0){
        den *= 10;
        x *= 10;
    }
    for (i = 2; i<den; i++){
        if ((fmod(x,i) == 0) && (fmod(den,i) == 0)){
            x = x/(double)i;
            den = den/(double)i;
            i=1;
        }
    }
    printf("%.0lf/%.0lf", x, den);
    return 0;
}