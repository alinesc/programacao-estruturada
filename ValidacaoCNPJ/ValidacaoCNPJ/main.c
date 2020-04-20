//  ValidacaoCNPJ
//  Created by Aline Souza Cruz on 13/04/20
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

void converteEntrada (char entrada[], int cnpj[]){
    int i, j;
    for (i=0; i<14; i++) {
        cnpj[i] = 0;
    }
    i = 13;
    j = strlen(entrada) - 1;
    while (j>=0 && i >= 0) {
        if(entrada[j] >= '0' && entrada[j] <= '9'){
            cnpj[i] = entrada[j] - '0';
            i--;
        }
        j--;
    }
}

bool validaCNPJ(int nCnpj[], int m, int d){
    int soma = 0;
    int c, digito;
    for (c=0; c<d; c++){
        soma +=  m * nCnpj[c];
        if (m == 2){
            m = 9;
        }
        else {
            m --;
        }
    }
    int resto = soma % 11;
    if (resto < 2){
        digito = 0;
    }
    else {
        digito = 11 - resto;
    }
    if (digito == nCnpj[d]){
        return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    char cnpjEntrada[25];
    int cnpj[14];
    setlocale(LC_ALL, "Portuguese");
    int mult = 5;
    int digito = 12;
    printf("Digite o CNPJ: ");
    fgets(cnpjEntrada, 25, stdin);
    converteEntrada(cnpjEntrada, cnpj);
    if (validaCNPJ(cnpj, mult, digito) == true) {
        mult = 6;
        digito = 13;
        if (validaCNPJ(cnpj, mult, digito) == true) {
            printf("Dígito validado.");
        }
        else {
            printf("Dígito incorreto.");
        }
    }
    else {
        printf("Dígito incorreto.");
    }
    
    return 0;
}
