#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char nome[20],sobrenome[20];
    char copnome[20],copsobrenome[20];

    printf("<< Vetor de Char >>\n");
    printf("\nDigite um nome e sobrenome: ");
    scanf("%s",&nome);
    scanf("%s",&sobrenome);
    
    strncpy(copnome, nome, strlen(nome));
    strncpy(copsobrenome, sobrenome, strlen(sobrenome));

    printf("\nNome: %s",copnome);
    printf("\nSobrenome: %s\n",copsobrenome);

    return 0;
}