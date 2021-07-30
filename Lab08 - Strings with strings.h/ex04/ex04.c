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

    for(int i=0;i<strlen(nome1);i++){
        if(nome1[i]-32 != nome1[i] || nome2[i]-32 != nome2[i]){
            printf("\nOs nome digitados sao iguais.\n");
        }
    }
    if(strcmp(nome1,nome2) == 0){
        printf("\nOs nomes digitados sao iguais.\n");
    }else{
        printf("\nOs nomes digitados sao diferentes.\n");
    }

    return 0;
}