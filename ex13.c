#include <stdio.h> 

int main(){
    int x, qnt_par = 0, qnt_imp = 0;
    int mediap = 0, mediai = 0;
    scanf("%d",&x);
    while(x != 0){
        
        if ((x%2) == 0){
            mediap=mediap + x;
            qnt_par++;
        }
        else{
            mediai=mediai + x;
            qnt_imp++;
        }
        scanf("%d",&x);
    }
    if (qnt_par == 0) qnt_par = 1;
    if (qnt_imp == 0) qnt_imp = 1;
    printf("MEDIA PAR: %lf\n",mediap/(double)qnt_par);
    printf("MEDIA IMPAR: %lf\n",mediai/(double)qnt_imp);
    return 0;
}