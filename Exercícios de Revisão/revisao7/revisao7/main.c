/* 7. Dadas duas sequências com n números inteiros entre 0 e 9, interpretadas como dois números inteiros de n algarismos, calcular a sequência de números que representa a soma dos dois inteiros.
Exemplo: n = 8,
        1ª sequência        8 2 4 3 4 2 5 1
        2ª sequência        3 3 7 5 2 3 3 7  +
                         -----------------------
                         1 1 6 1 8 6 5 8 8
*/
//  Created by Aline Souza Cruz on 27/02/20.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, c, inter;
    printf("Digite o comprimento dos números: ");
    scanf("%d", &n);
    int n1[n], n2[n], soma[n+1];
    printf("Digite o primeiro número: ");
    for (c=0; c<n; c++) {
        scanf("%d", &n1[c]);
    }
    printf("Digite o segundo número: ");
    for (c=0; c<n; c++) {
        scanf("%d", &n2[c]);
    }
    for (c = n-1; c>=0; c--) {
        inter = n1[c-1] + n2[c-1];
        if (inter > 9) {
            soma[c] = inter % 10;
            soma[c-1] = 1;
        }
        else {
            soma[c] = inter + soma[c];
        }
        if (soma[0] != 1) {
            soma[0] = 0;
        }
    }
    
    for (c=0; c<n; c++) {
        printf("%d ", n1[c]);
    }
    printf("\n");
    for (c=0; c<n; c++) {
        printf("%d ", n2[c]);
    }
    printf("\n");
    for (c=0; c<n; c++) {
        printf("%d ", soma[c]);
    }
    printf("\n");
    return 0;
}
