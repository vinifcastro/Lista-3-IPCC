#include <stdio.h>

int main (){
    unsigned long int cod, cmlucro, cmvendido;
    int numvendas, dezpm, vintepm, vintepmais, vendasf;
    double pcompra, pvenda, lucroa, lucrof, totalc, totalv;
    
    lucroa = totalc = totalv = lucrof = vintepm = vintepmais = dezpm = vendasf = 0;
    
    while (scanf("%lu %lf %lf %d", &cod, &pcompra, &pvenda, &numvendas) != EOF){
        lucroa = ((pvenda-pcompra)*numvendas)/(pcompra*numvendas);
        totalc = totalc + (pcompra*numvendas);
        totalv = totalv + (pvenda*numvendas);
        if(lucroa < 0.1) dezpm = dezpm + 1;
        if((lucroa >= 0.1) && (lucroa <= 0.2)) vintepm = vintepm + 1;
        if(lucroa > 0.2) vintepmais = vintepmais + 1;
        if (lucroa > lucrof){
            lucrof = lucroa;
            cmlucro = cod;
        }
        if (numvendas > vendasf){
            vendasf = numvendas;
            cmvendido = cod;
        }
    }
    lucrof = ((totalv-totalc)/totalc)*(double)100;
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", dezpm);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", vintepm);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", vintepmais);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n",cmlucro);
    printf("Codigo da mercadoria mais vendida: %lu\n",cmvendido);
    printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n", totalc, totalv, lucrof);
    return 0;
}