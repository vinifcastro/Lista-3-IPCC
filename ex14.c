#include <stdio.h>

int main(){
    int n, k , i = 0, x = 0, num_jogos = 1, num_adv = 2;
    scanf("%d", &n);
    if (n < 2) printf("Campeonato invalido!\n");
    for(i = 0; i < n; i++){
        num_adv = i+2;
        while (num_adv <= n){
            printf("Final %d: Time%d X Time%d\n", num_jogos, i+1, num_adv);
            num_jogos++;
            num_adv++;
        }
    }
    return 0;
}