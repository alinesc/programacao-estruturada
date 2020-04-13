/* 6. Dados dois números naturais m e n e duas sequências ordenadas com m e n números inteiros, obter uma única sequência ordenada contendo todos os elementos das sequências originais sem repetição.
Sugestão: Imagine uma situação real, por exemplo, dois fichários de uma biblioteca.
Exemplo:
Sequência 1:  1, 1, 2, 3, 4, 8, 9
Sequência 2:  1, 3, 5, 7, 10
Sequência gerada (sem repetição): 1, 2, 3, 4, 5, 7, 8, 9, 10
*/
//  Created by Aline Souza Cruz on 26/02/20.
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int tam1, tam2, cont1, cont2, cont3;
    printf("Digite o número de elementos do primeiro vetor em ordem crescente: ");
    scanf("%d", &tam1);
    int vetor1[tam1];
    printf("Insira os valores: ");
    for (cont1 = 0; cont1 < tam1; cont1++){
        scanf("%d", &vetor1[cont1]);
    }
    printf("Digite o número de elementos do segundo vetor em ordem crescente: ");
    scanf("%d", &tam2);
    int vetor2[tam2];
    printf("Insira os valores: ");
    for (cont2 = 0; cont2 < tam2; cont2++){
        scanf("%d", &vetor2[cont2]);
    }
    int tam3 = tam1 + tam2;
    int vetor3[tam3];

    for (cont3=0; cont3 < tam3; cont3++) {
            if (vetor1[cont3] <= vetor2[cont3]){
                vetor3[cont3] = vetor1[cont3];
                vetor3[cont3+1] = vetor2[cont3];
            }
            else {
                vetor3[cont3] = vetor2[cont3];
                vetor3[cont3+1] = vetor1[cont3];
            }
        printf("%d\n", vetor3[cont3]);
        }
        
    //}
    return 0;
}
