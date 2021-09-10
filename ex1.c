#include <stdio.h>

int main(){
    int k, i;
    double p, pp, pg, pa, pc, renda;

    scanf("%d", &k);
    for(i = 0; i < k; i++){
        scanf("%lf %lf %lf %lf %lf", &p, &pp, &pg, &pa, &pc);
        renda = ((pp/100)*p) + ((pg/100)*p)*5 + ((pa/100)*p)*10 + ((pc/100)*p)*20;
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i+1, renda);
    }
    return 0;
}
