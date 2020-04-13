//  Created by Aline Souza Cruz on 26/02/20.
/* 1. Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos diferentes de n.
Exemplo: 6 é perfeito, pois 1+2+3 = 6. Dado um inteiro positivo n, verificar se n é perfeito.
*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, soma = 0, c;
    printf("Digite um número: ");
    scanf("%d", &n);
    for (c=1; c<=n/2; c++) {
        if (n%c == 0) {
            soma = soma + c;
        }
    }
    if (n == soma) {
        printf("O número %d é perfeito.", n);
    }
    else {
        printf("O número %d não é perfeito.", n);
    }
    return 0;
}
