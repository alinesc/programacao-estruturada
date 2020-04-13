//  Fatorial
//  Created by Aline Souza Cruz on 07/03/20.

#include <stdio.h>

int fatorial (int x) {
    int calculo = 1;
    int c;
    for (c = 2; c <= x; c++){
        calculo = calculo * c;
    }
    return calculo;
}

int main(int argc, const char * argv[]) {
    int n_elementos;
    printf("Digite o número de elementos: ");
    scanf("%i", &n_elementos);
    int tam_grupo;
    printf("Digite o número de elementos: ");
    scanf("%i", &tam_grupo);
    int a;
    a = fatorial(n_elementos) / fatorial(n_elementos - tam_grupo);
    printf("O resultado é %i.", a);
    return 0;
}
