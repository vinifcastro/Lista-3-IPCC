#include <stdio.h>

int main(){
    float n, i, k, s;
    int j;
    scanf("%f %f %f %f", &n, &i, &k, &s);
    printf("Tabuada de soma:\n");
    for (j = 0; j < k; j++) printf("%.2f + %.2f = %.2f\n", n, i+(j*s), n + (i+(j*s)));
    printf("Tabuada de subtracao:\n");
    for (j = 0; j < k; j++) printf("%.2f - %.2f = %.2f\n", n, i+(j*s), n - (i+(j*s)));
    printf("Tabuada de multiplicacao:\n");
    for (j = 0; j < k; j++) printf("%.2f x %.2f = %.2f\n", n, i+(j*s), n * (i+(j*s)));
    printf("Tabuada de divisao:\n");
    for (j = 0; j < k; j++) printf("%.2f / %.2lf = %.2f\n", n, i+(j*s), n / (i+(j*s)));
    return 0;
}