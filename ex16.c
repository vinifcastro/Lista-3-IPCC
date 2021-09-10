#include <stdio.h>

int main(){
    int mat = 1;
    double horas, valor_hora, salario;
    scanf ("%d %lf %lf", &mat, &horas, &valor_hora);
    while (mat != 0){
        salario = horas * valor_hora;
        printf("%d %.2lf\n", mat, salario);
        scanf ("%d %lf %lf", &mat, &horas, &valor_hora);
    }
    return 0;
}