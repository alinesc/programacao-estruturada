
//  Newton-Rapson
//  Created by Aline Souza Cruz on 29/02/20.

#include <stdio.h>

float newtonRapson (float sqroot){
    float novo, chute, diferenca;
    chute = sqroot;
    do{
        novo = (chute * chute + sqroot)/(2 * chute);
        diferenca = chute - novo;
        chute = novo;
    }
    while (diferenca > 0.001);
    return novo;
}

int main(int argc, const char * argv[]) {
    float raiz;
    printf("Digite um número para extrair sua raiz: ");
    scanf("%f", &raiz);
    printf("O valor da raiz de %f é %f.", raiz, newtonRapson(raiz) );
    
    return 0;
}
