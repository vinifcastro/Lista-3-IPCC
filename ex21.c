#include <stdio.h>

int main(){
    int n, a, b, i, temp, temp_dois, maior;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        temp = a/100;
        temp = temp + (a%100/10)*10;
        temp = temp + ((a%100)%10)*100;
        temp_dois = b/100;
        temp_dois = temp_dois + (b%100/10)*10;
        temp_dois = temp_dois + ((b%100)%10)*100;
        maior = temp;
        if(temp_dois>maior) maior = temp_dois;
        printf("%d\n", maior);
    }
    return 0; 
}  