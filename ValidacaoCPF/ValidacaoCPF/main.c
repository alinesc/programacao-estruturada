//  ValidacaoCPF
//  Created by Aline Souza Cruz on 29/02/20.

#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void converteCpf(char entrada[], int cpf[]) {
        int i, j;
        for(i=0; i<11; i++){
        cpf[i] = 0; }
        i=10; //último índice do vetor cpf
        j=strlen(entrada)-1;
        while(j>=0 && i>=0)
        {    if(entrada[j]>='0' && entrada[j]<='9')
            {    cpf[i] = entrada[j] - '0';
                i--;
            }
            j--;
        }
}

bool naoRepetidos(int cpf[]){
    int i; //int ver=0
    for(i=0;i<10;i++)
    {
        if (cpf[i] != cpf[i+1]){
            return true;
        }
    }
    return false;
    /*{    if (cpf[i] == cpf[i+1]){
            ver++;
    }
    }
    return (ver == 10);*/
    // essa versão precisa fazer todas as verificações - não é necessário
}

bool validacaoDigito(int cpf[], int mult[], int N){
    int i, soma=0;
    for(i=0; i<N; i++)
    {    soma = soma + cpf[i]*mult[i];
    }
    int resto = ((soma*10) % 11)%10;
      
    if(resto == cpf[N]){
        return true;
    }
    else{
        return false;
    }
    // ou return (resto == cpf[N];
}
void verificaEstado(int cpf[]){
    switch (cpf[8]) {
        case 0:
            printf("O CPF é do estado Rio Grande do Sul.");
            break;
        case 1:
            printf("O CPF é de um desses estados - Distrito Federal, Goiás, Mato Grosso, Mato Grosso do Sul e Tocantins.");
            break;
        case 2:
            printf("O CPF é de um desses estados - Amazonas, Pará, Roraima, Amapá, Acre e Rondônia.");
            break;
        case 3:
            printf("O CPF é de um desses estados - Ceará, Maranhão e Piauí.");
            break;
        case 4:
            printf("O CPF é de um desses estados - Paraíba, Pernambuco, Alagoas e Rio Grande do Norte.");
            break;
        case 5:
            printf("O CPF é de um desses estados - Bahia e Sergipe.");
            break;
        case 6:
            printf("O CPF é do estado Minas Gerais.");
            break;
        case 7:
            printf("O CPF é de um desses estados - Rio de Janeiro ou Espírito Santo.");
            break;
        case 8:
            printf("O CPF é do estado São Paulo.");
            break;
            case 9:
                printf("O CPF é de um desses estados - Paraná ou Santa Catarina.");
            break;
        default:
            break;
    }
}



int main(int argc, const char * argv[]) {
    char entrada[20];
    int cpf[11];
    int m1[9]={10,9,8,7,6,5,4,3,2};
    int m2[10]={11,10,9,8,7,6,5,4,3,2};
    //int i;
    setlocale(LC_ALL, "Portuguese");
    //int ver=0;

    printf("Entre com os 11 digitos do CPF:");
    fgets(entrada, 20, stdin);
    converteCpf(entrada, cpf);
    //for(i=0;i<11;i++)
    //{    scanf("%d", &cpf[i]);
    //}
    
    if (naoRepetidos(cpf) && validacaoDigito(cpf, m1, 9) && validacaoDigito(cpf, m2, 10)){
        printf("\nCPF válido.");
        verificaEstado(cpf);
        
    }
    else{
        printf("\nErro no CPF.");
    }
    
    // O E em caso negativo no primeiro, não testa o segundo.
    
    /*for(i=0;i<11;i++)
    {    if (cpf[i] == cpf[i+1]){
        ver++;
    }
    }
        if (ver == 10){
            printf("CPF inválido.");
        }
        else {*/
    //Cálculo do primeiro dígito verificador
            
    /*int soma=0;
    for(i=0; i<9; i++)
    {    soma = soma + cpf[i]*m1[i];
    }
    int resto = ((soma*10) % 11)%10;
      
    if(resto == cpf[9]){
        printf("\nPrimeiro verificador valido.");
    }
    else{
        printf("\nErro no primeiro verificador.");
    }
    soma=0;
    for(i=0; i<10; i++)
    {    soma = soma + cpf[i]*m2[i];
    }
    resto = ((soma*10) % 11)%10;
      
    if(resto == cpf[10]){
        printf("\nSegundo verificador valido.");
    }
    else{
        printf("\nErro no segundo verificador.");
    }*/
   //     }
    
    // recebe um cpf com caracteres diversos numa única string - char cpf[100] = scanf da inserção
    //converter cada posição da string com tabela ASC II e ignorar outros
    // colocar esse resultado no vetor cpf
 
    
    return 0;
    
    
}
