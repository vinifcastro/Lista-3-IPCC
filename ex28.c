#include <stdio.h>

/**
 * @brief Realizará o cálculo do valor do salário bruto do funcionário;
 * 
 * @param x valor do salário mínimo (sm);
 * @param y preço tv 1 (ptv_1);
 * @param z preço tv 2 (ptv_@);
 * @param a numero de tvs 1 vendidas (ntv_1);
 * @param b número de tvs 2 vendidas (ntv_2);
 * @return retornará o valor bruto do salário do funcionário;
 */
double calcsbruto(double x, double y, double z, int a, int b);

/**
 * @brief Realizará o cáculo do salário líquido do funcionário, descontando INSS e imposto de renda;
 * 
 * @param c Valor do salário bruto;
 * @param d Valor de isenção do imposto de renda;
 * @return retornará o valor do salário líquido do funcionário;
 */
double calcsliq(double c, double d);

int main(){
    double ii, ptv_1, ptv_2, sm, sb, sl;
    long unsigned int mat;
    int ntv_1, ntv_2;
    mat = 1;
    scanf("%lf %lf %lf %lf", &sm, &ii, &ptv_1, &ptv_2);
    scanf("%lu %d %d", &mat, &ntv_1, &ntv_2);
    while (mat != 0){
        sb = calcsbruto(sm, ptv_1, ptv_2, ntv_1, ntv_2);
        sl = calcsliq(sb, ii);
        printf ("MATRICULA = %lu, SALARIO BRUTO = %.2lf, SALARIO LIQUIDO = %.2lf\n", mat, sb, sl);
        scanf("%lu %d %d", &mat, &ntv_1, &ntv_2);
    }
    return 0;
}

double calcsbruto(double x, double y, double z, int a, int b){
    double sb, comissaotv_1, comissaotv_2;
    if (a >= 10) comissaotv_1 = (0.14*y)*a;
    else comissaotv_1 = (0.13*y)*a;
    if (b >= 20) comissaotv_2 = (0.13*z)*b;
    else comissaotv_2 = (0.12*z)*b;
    sb = x + comissaotv_1 + comissaotv_2;
    return sb;
}

double calcsliq(double c, double d){
    double sliq;
    if (c>d) sliq = (c - (c*0.08)) - (((c - (c*0.08)) - d)*0.15);
    else sliq = c - (c*0.08);
    return sliq;
}