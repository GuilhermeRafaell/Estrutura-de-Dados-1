#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char nome[50],nome2[50];

    printf("<< Sem Vogais >>\n");
    printf("\nDigite a string: ");
    gets(nome);
    
    for(int i=0;i<strlen(nome);i++){
        if(nome[i] != 'a' || nome[i] != 'e' || nome[i] != 'i' || nome[i] != 'o' || nome[i] != 'u')
            strcpy(nome2,nome);
    }

    printf("\nSaida sem vogais: %s",nome2);
    return 0;
}