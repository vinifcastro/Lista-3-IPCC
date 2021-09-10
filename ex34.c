#include <stdio.h>
 
int main(){
    int x, i, j, mult;
    mult = 1;
    i=2;
    j=1;
    while (scanf("%lu", &x) != EOF){
        if (x<=1){
            printf ("Fatoracao nao e possivel para o numero %d!\n", x);
        }
        else{
            while (mult != x){
                if (j == 1){
                    printf ("%d = ", x);
                    j++;
                }    
                if (x%i == 0){
                    printf ("%d", i);
                    x = x/i;
                    if (x != 1) printf (" x ");
                    i = 2;
                }
                else i++;
            }
            printf ("\n");
            j = 1;
        }
    }
    return 0;
}