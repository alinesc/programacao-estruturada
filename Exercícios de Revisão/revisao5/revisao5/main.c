/* 5. Dados n e uma sequência de n números inteiros, determinar o
comprimento de um segmento crescente de comprimento máximo.
Exemplos:
Na sequência 5, 10, 3, <<2, 4, 7, 9>>, 8, 5 o comprimento do segmento crescente máximo é 4.
Na sequência 10, 8, 7, 5, 2 o comprimento de um segmento crescente máximo é 1. */

//  Created by Aline Souza Cruz on 26/02/20.
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int vetor[]={10, 8, 7, 5, 2};
    int maiorSeq=1, seq=1, cont;
    for (cont=1; cont < 5; cont++) {
        if (vetor[cont] > vetor[cont -1]) {
            seq++;
            if (seq > maiorSeq){
                maiorSeq = seq;
            }
        }
        else {
            seq = 1;
        }
    }
    printf("%d\n", maiorSeq);
    return 0;
}
