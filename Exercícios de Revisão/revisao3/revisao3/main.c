//  Created by Aline Souza Cruz on 26/02/20.
/*3. Dado um número natural na base decimal, transformá-lo para a base binária.
Exemplo: Dado 18 a saída deverá ser 10010.*/

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int dec, soma=0, cont = 0, div, mod;
    printf("Digite um número em decimal: ");
    scanf("%d", &dec);
    do {
        mod = dec % 2;
        div = dec/2;
        dec = div;
        soma = soma + pow(10, cont) * mod;
        cont ++;
    }
    while (div != 0);
    printf("O valor em decimal é %d.", soma);
    
    return 0;
}
