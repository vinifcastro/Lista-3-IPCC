#include <stdio.h>
#include <math.h>

int main(){
    int n, co, ca, hf, i;
    double h;
    scanf("%d", &n);
    for (i = 2; i < (n+1); i++){
        ca = co = 1;
        while (co <= i){
            h = (double)(co*co)+(ca*ca);
            h = sqrt(h);
            if((fmod(h,1) == 0) && h == i){
                hf = h;
                printf("hipotenusa = %d, catetos %d e %d\n", hf, co, ca);
            }
            ca++;
            if (ca>i){
                co++;
                ca = co;
            }
        }
    }
    return 0;
}
