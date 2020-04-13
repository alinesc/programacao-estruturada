//  matriz2
//  Created by Aline Souza Cruz on 24/03/20
#include <stdio.h>

int somadiagonal(int l){
    int c = l;
    int cont1, cont2, soma=0;
    int matriz[l][c];
    for ( cont1= 0; cont1 < l; cont1++){
        for (cont2=0; cont2 < c; cont2++){
            printf("Digite um valor: ");
            scanf("%d", &matriz[cont1][cont2]);
        }
    }
    for (cont1= 0; cont1 < l; cont1++){
        for (cont2=0; cont2 < c; cont2++){
            if (cont1 == cont2) {
                soma = soma + matriz[cont1][cont2];
            }
        }
    }
    return soma;
    
}

int main(int argc, const char * argv[]) {
    int lin;
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &lin);
    int resul = somadiagonal(lin);
    printf("O resultado da soma dos itens da diagonal principal é de %d.\n", resul);
    
    
    return 0;
}
