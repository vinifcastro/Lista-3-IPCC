#include <stdio.h>
 
int main(){
    int i,anterior=0,x,sequencia_atual=1,maior_sequencia=0,z;
    scanf("%d ", &z);
    for(i = 0; i < z; i++){
	anterior=x;
        scanf("%d", &x);
        if(i!=0){
	    if(anterior==x)
            	sequencia_atual++;
            else{
                if (sequencia_atual>maior_sequencia)
		    maior_sequencia=sequencia_atual;
	        sequencia_atual=1;
	        }
        }
    }    
    if (sequencia_atual>maior_sequencia)
	maior_sequencia=sequencia_atual;
    printf("O comprimento do segmento de numeros iguais e: %d\n", maior_sequencia);
    return 0;
}