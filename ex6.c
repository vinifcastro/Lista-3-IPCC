#include <stdio.h> 

int main(){
    int n;
    double somatorio, i;
    scanf("%d", &n);
    if (n <= 1){
        printf("Numero invalido!\n");
        return 0;
    }
    somatorio = 0;
    for(i = 1; i < (n+1); i++){
        somatorio += (1/i);
    }
    printf("%.6lf\n", somatorio);
    return 0;
}