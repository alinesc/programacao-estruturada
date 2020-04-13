/* Dados n e uma sequência de n números inteiros, determinar quantos segmentos de números iguais consecutivos compõem essa sequência.
Exemplo: A seguinte sequência é formada por 5 segmentos de números iguais: 5, 2, 2, 3, 4, 4, 4, 4, 1, 1
Ou seja, contarei assim: <<5>>,<< 2, 2>>,<< 3>>,<< 4, 4, 4, 4>>, <<1, 1>>
Portanto, tenho 5 grupos. */
//  Created by Aline Souza Cruz on 26/02/20.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int vetor[]={5, 2, 2, 3, 4, 4, 4, 4, 1, 1};
    int cont, seq = 1;
    for (cont = 0; cont < 10; cont++){
        if (cont != 0) {
            if (vetor[cont] != vetor[cont-1]) {
                seq++;
            }
        }
    }
    printf("%d\n", seq);
    return 0;
}
