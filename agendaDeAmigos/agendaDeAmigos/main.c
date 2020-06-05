//  agendaDeAmigos
//  Created by Aline Souza Cruz on 27/05/20.

#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<locale.h>
#include<stdlib.h>

struct ficha {
    char nome[40];
    char telefone[40];
    char endereco [100];
    char email [50];
    int idade;
    char redeSocial [50];
};

int procurarRecursivo (char procurado[], struct ficha vetor [], int num_fichas, int indiceInicio){
    if (indiceInicio >= num_fichas) return -1;
    else if (strcmp (procurado, vetor[indiceInicio].nome) == 0){
        return indiceInicio;
    }
    else {
        return procurarRecursivo(procurado, vetor, num_fichas, indiceInicio + 1);
    }
}


int main(int argc, const char * argv[]) {
    
    typedef struct ficha AGENDA;
    AGENDA amigos[100];
    int fichas_existentes = 0;
    int proxima = 0;
    char opcao[10] = "0";
    setlocale(LC_ALL, "Portuguese");
    
    while(opcao[0] != '5') {
        printf("\nEntre com a opção desejada: ");
        printf("\n1) Inserir ficha: ");
        printf("\n2) Procurar por nome: ");
        printf("\n3) Listar toda a base: ");
        printf("\n4) Excluir por nome: ");
        printf("\n5) Sair\n\n ");
        fgets(opcao, 10, stdin);
        
        if (opcao[0] == '1') {
            printf("\nEntre com um nome: ");
            fgets(amigos[proxima].nome, 40, stdin);
            printf("\nEntre com um telefone: ");
            fgets(amigos[proxima].telefone, 40, stdin);
            printf("\nEntre com um endereco: ");
            fgets(amigos[proxima].endereco, 100, stdin);
            printf("\nEntre com um email: ");
            fgets(amigos[proxima].email, 50, stdin);
            printf("\nEntre com a idade: ");
            scanf("%d", &amigos[proxima].idade);
            getchar();
            printf("\nEntre com um @ do Instagram: ");
            fgets(amigos[proxima].redeSocial, 50, stdin);
            fichas_existentes ++;
            proxima++;
        }
        if (opcao[0] == '2') {
            char procurado[40];
            printf("\nEntre com o nome procurado: ");
            fgets(procurado, 40, stdin);
            
            int indice = procurarRecursivo(procurado, amigos, fichas_existentes, 0);
            if (indice == -1) {
                printf("\nNome não encontrado. ");
            }
            else {
                printf("\n\nO telefone de %s é %s, endereco %s, email %s, idade %d e Instagram %s \n", amigos[indice].nome, amigos[indice].telefone, amigos[indice].endereco, amigos[indice].email, amigos[indice].idade, amigos[indice].redeSocial );
            }
            
        }
        if (opcao[0] == '3'){
            printf("\n\n");
            int i;
            for (i=0; i<fichas_existentes; i++){
                printf("O telefone de %s é %s, endereco %s, email %s, idade %d e Instagram %s \n", amigos[i].nome, amigos[i].telefone, amigos[i].endereco, amigos[i].email, amigos[i].idade, amigos[i].redeSocial );
            }
            if (fichas_existentes == 0) {
                printf("\nA base de dados está vazia\n. ");
            }
        }
        if (opcao[0] == '4') {
            char procurado[40];
            printf("\nEntre com o nome que será excluído: ");
            fgets(procurado, 40, stdin);
            
            int indice = procurarRecursivo(procurado, amigos, fichas_existentes, 0);
            if (indice == -1) {
                printf("\nNome não encontrado. ");
            }
            else {
                printf("\n\nO telefone de %s, %s, endereco %s, email %s, idade %d e Instagram %s, será removido \n", amigos[indice].nome, amigos[indice].telefone, amigos[indice].endereco, amigos[indice].email, amigos[indice].idade, amigos[indice].redeSocial );
                amigos[indice] = amigos[fichas_existentes -1];
                fichas_existentes --;
                proxima --;
            }
        }
    }
    return 0;
    }
