#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char nome1[50],nome2[50];

    printf("<< Compara Nomes >>\n");

    printf("\nDigite o nome 1: ");
    gets(nome1);
    printf("Digite o nome 2: ");
    gets(nome2);

    if(strcmp(nome1,nome2) == 0){
        printf("\nOs nomes digitados sao iguais.\n");
    }else{
        printf("\nOs nomes digitados sao diferentes.\n");
    }

    return 0;
}