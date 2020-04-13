//  campominhocas
//  Created by Aline Souza Cruz on 24/03/20.
#include <stdio.h>

int campoMinhocas (int l, int c) {
    int soma = 0, maiorsoma = 0, c1, c2=0;
    int matriz[l][c];
    for (c1=0; c1<l; c1++){
        for (c2=0; c2<c; c2++){
            printf("Digite o valor: ");
            scanf("%d", &matriz[c1][c2]);
            }
        }
    for (c1=0; c1<l; c1++){
        do {
            soma = soma + matriz[c1][c2];
            c2++;
        }
        while (c2 < c);
        if (soma > maiorsoma) {
            maiorsoma = soma;
        }
        soma = 0;
        c2 = 0;
    }
    c1=0;
        for (c2=0; c2<c; c2++){
            do {
                soma = soma + matriz[c1][c2];
                c1++;
            }
            while (c1 < l);
            if (soma > maiorsoma) {
                maiorsoma = soma;
            }
            soma=0;
            c1=0;
        }
    return maiorsoma;
}

int main(int argc, const char * argv[]) {
    int linha, coluna;
    printf("Digite o número de linhas: ");
    scanf("%d", &linha);
    printf("Digite o número de colunas: ");
    scanf("%d", &coluna);
    printf("%d\n", campoMinhocas(linha, coluna));
    return 0;
}
