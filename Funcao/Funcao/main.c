//  Funcao - para tornar o código menor, deixá-lo mais organizado
//  Created by Aline Souza Cruz on 29/02/20.

#include <stdio.h>
int soma (int x, int y) {
    return x + y;
}

// tipo de resposta que a função dá (int) + nome + (entradas da função com os tipos)
// return encerra a função e devolve a resposta

int main(int argc, const char * argv[]) {
    int a, b, c;
    printf("Entre com dois números: ");
    scanf("%d%d", &a, &b);
    c = soma(a,b);
    printf("A soma vale %d\n", c);
    
    a=4; b=12;
    printf("A soma vale %d\n", soma(a,b));
    
    printf("A soma vale %d\n", soma(7,2));
    
    return 0;
}
