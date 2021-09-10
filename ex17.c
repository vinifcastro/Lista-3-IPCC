#include <stdio.h>
double erro(double x, double y);

int main(){
    double erro_atual=1, erro_pedido, r=1, n;
    scanf("%lf %lf", &n, &erro_pedido);
    while (erro_atual > erro_pedido){
        r = (r + (n/r))/(double)2;
        erro_atual = erro(n, r);        
        printf("r: %.9lf, err: %.9lf\n", r, erro_atual);
    }
    return 0; 
}

double erro(double x, double y){
    double z;
    z = x - (y*y);
    if (z < 0) z = z*(double)-1;
    return z;
}