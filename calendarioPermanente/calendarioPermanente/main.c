//  calendarioPermanente
//  Created by Aline Souza Cruz on 26/03/20.

#include <stdio.h>
#include <locale.h>

int procurarLinha(int L, int C, int mat[L][C], int proc) {
    int lin, col, n;
    for (lin=0; lin <= L; lin++){
        for(col=0; col <= C; col++){
            if (mat[lin][col] == proc) {
                n = lin;
            }
        }
    }
    return n;
}

int A1[28][4], A2[28][4];
int B[28][12] =
{{4,0,0,3,5,1,3,6,2,4,0,2},
{5,1,1,4,6,2,4,0,3,5,1,3},
{6,2,2,5,0,3,5,1,4,6,2,4},
{0,3,4,0,2,5,0,3,6,1,4,6},
{2,5,5,1,3,6,1,4,0,2,5,0},
{3,6,6,2,4,0,2,5,1,3,6,1},
{4,0,0,3,5,1,3,6,2,4,0,2},
{5,1,2,5,0,3,5,1,4,6,2,4},
{0,3,3,6,1,4,6,2,5,0,3,5},
{1,4,4,0,2,5,0,3,6,1,4,6},
{2,5,5,1,3,6,1,4,0,2,5,0},
{3,6,0,3,5,1,3,6,2,4,0,2},
{5,1,1,4,6,2,4,0,3,5,1,3},
{6,2,2,5,0,3,5,1,4,6,2,4},
{0,3,3,6,1,4,6,2,5,0,3,5},
{1,4,5,1,3,6,1,4,0,2,5,0},
{3,6,6,2,4,0,2,5,1,3,6,1},
{4,0,0,3,5,1,3,6,2,4,0,2},
{5,1,1,4,6,2,4,0,3,5,1,3},
{6,2,3,6,1,4,6,2,5,0,3,5},
{1,4,4,0,2,5,0,3,6,1,4,6},
{2,5,5,1,3,6,1,4,0,2,5,0},
{3,6,6,2,4,0,2,5,1,3,6,1},
{4,0,1,4,6,2,4,0,3,5,1,3},
{6,2,2,5,0,3,5,1,4,6,2,4},
{0,3,3,6,1,4,6,2,5,0,3,5},
{1,4,4,0,2,5,0,3,6,1,4,6},
{2,5,6,2,4,0,2,5,1,3,6,1}};
int C[7][6];

int main(int argc, const char * argv[]) {

    // populando a tabela A1
    int l, c, x= -3;
    for(c=0; c<4; c++){
        for(l=0; l<28; l++, x++){
            if (x < 1) {
                A1[c][l] = -1;}
            else if (x<100) {
                A1[l][c] = x;
            }
            else if (x == 100) {
                A1[l][c] = 0;
            }
            else {
                A1[l][c] = -1;
            }
        }
    }
    
    // populando a tabela A2
    
    x = -19;
    for(c=0; c<4; c++){
        for(l=0; l<28; l++, x++) {
            if (x < 1) {
                A2[l][c] = -1;
            }
            else {
                A2[l][c] = x;
            }
        }
    }
    
    // populando a tabela C
    
    x = 1;
    for(c=0; c<6; c++) {
        for(l=0;l<7; l++, x++) {
            if (x>37){
                C[l][c] = -1;
            }
            else {
                C[l][c] = x;
            }
        }
    }
    
    int dia, mes, ano, resposta, linha;
    setlocale(LC_ALL, "Portuguese");
    printf("\nEntre com uma data no formato DD/MM/AAAA: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    if (ano < 1901 || ano > 2092) {
        printf("Erro! O ano deve ser de 1901 a 2092.\n");
    }
    if (ano < 2001) {
        ano = ano % 100;
        linha = procurarLinha(28, 4, A1, ano);
    }
    else {
        ano = ano % 100;
        linha = procurarLinha(28, 4, A2, ano);
    }
    resposta = (B[linha][mes-1]) + dia;
    linha = procurarLinha(7, 6, C, resposta);
    switch (linha) {
        case 0:
            printf("Domingo\n");
            break;
        case 1:
            printf("Segunda\n");
            break;
        case 2:
            printf("Terça\n");
            break;
        case 3:
            printf("Quarta\n");
            break;
        case 4:
            printf("Quinta\n");
            break;
        case 5:
            printf("Sexta\n");
            break;
        case 6:
            printf("Sábado\n");
            break;
        default:
            break;
    }
    return 0;
}
