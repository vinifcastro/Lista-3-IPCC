#include <stdio.h> 

int main(){
    int anos = 0;
    int pa, pb;
    scanf("%d %d", &pa, &pb);
    while (pb >= pa){
        pa = pa + (pa * 0.03);
        pb = pb + (pb * 0.015);
        anos++;
    }
    printf("ANOS = %d\n", anos);
    return 0;
}