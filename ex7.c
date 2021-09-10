#include <stdio.h> 

int main(){
    while(1){
        int mat, i;
        double x, mediap, freq, medial, trab, nf;
        mediap = medial = 0;
        scanf("%d", &mat);
        if(mat == -1) break;
        for(i = 0; i < 8; i++){
            scanf("%lf", &x);
            mediap = mediap + x;
        }
        for(i = 0; i < 5; i++){
            scanf("%lf", &x);
            medial = medial + x;
        }
        scanf("%lf", &trab);
        scanf("%lf", &freq);
        mediap = mediap/8.0;
        medial = medial/5.0;
        freq = freq/128.0;
        nf = ((0.7*mediap) + (0.15*medial) + (0.15*trab));
        if((nf >= 6) && (freq >= 0.75)) printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", mat, nf);
        else if((nf >= 6) && (freq < 0.75)) printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", mat, nf);
        else if((nf < 6) && (freq >= 0.75)) printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", mat, nf);
        else if((nf < 6) && (freq < 0.75)) printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", mat, nf);
    }
    return 0;
}