//  Created by Aline Souza Cruz on 26/02/20.
/*2. Dado um número natural na base binária, transformá-lo para a base decimal.
Exemplo: Dado 10010 a saída será 18, pois 1. 2^4 + 0. 2^3 + 0. 2^2 + 1. 2^1 + 0. 2^0 = 18.*/

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int bin, soma=0, cont = 0, div, mod;
    printf("Digite um número em binário: ");
    scanf("%d", &bin);
    do {
        mod = bin % 10;
        div = bin/10;
        bin = div;
        soma = soma + pow(2, cont) * mod;
        cont ++;
    }
    while (div != 0);
    printf("O valor em decimal é %d.", soma);
    return 0;
}
