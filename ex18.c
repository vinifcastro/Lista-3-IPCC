#include <stdio.h>

double calcnumeroing(double * x, double * y){
    double ing;
    ing = 120;
    if (*y < *x){
        while (*y < *x){
            *y = *y + 0.50;
            ing = ing - 30;
        }
        return ing;
    }
    else if (*y > *x){
        while (*y > *x){
            *y = *y - 0.50;
            ing = ing + 25;
        }
        return ing;
    }
    else return ing;
}

int main(){
    double valor_mercado, valor_i, valor_f, lucro_atual, lucro_final, ingressos_atual, ingressos_final, melhor_valor, tmp;
    scanf("%lf %lf %lf", &valor_mercado, &valor_i, &valor_f);
    lucro_final = ingressos_final = melhor_valor = 0;
    if (valor_i > valor_f){
        printf("INTERVALO INVALIDO.\n");
        return 0;
    }
    while (valor_i <= valor_f){
        tmp = valor_mercado;
        ingressos_atual = calcnumeroing(&valor_i, &tmp);
        lucro_atual = (valor_i*ingressos_atual) - (double) (200 + (0.05*ingressos_atual));
        if (lucro_atual > lucro_final){
            lucro_final = lucro_atual;
            ingressos_final = ingressos_atual;
            melhor_valor = valor_i;
        }
        printf("V: %.2lf, N: %.0lf, L: %.2lf\n", valor_i, ingressos_atual, lucro_atual);
        valor_i++;
    }
    printf("Melhor valor final:  %.2lf\n", melhor_valor);
    printf("Lucro:  %.2lf\n", lucro_final);
    printf("Numero de ingressos:  %.0lf\n", ingressos_final);
    return 0;
}