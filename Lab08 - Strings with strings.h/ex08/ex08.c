#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char nome[30],cpf[15],rg[13],endereco[30],cidade[15],estado[3],cep[10];

    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu CPF: ");
    gets(cpf);
    printf("Digite seu RG: ");
    gets(rg);
    printf("Digite seu endereco: ");
    gets(endereco);
    printf("Digite a cidade: ");
    gets(cidade);
    printf("Digite o Estado: ");
    gets(estado);
    printf("Digite o CEP: ");
    gets(cep);

    printf("\nD E C L A R A C A O\n");

    printf("\nEu, %s, RG %s, CPF %s,\n residente a %s, %s-%s,\nCEP %s venho por meio desta declarar que vou estudar para a prova.",nome,rg,cpf,endereco,cidade,estado,cep);

    
}