#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char nome[50];

    printf("<< Separa Letras >>\n");
    printf("\nDigite o nome: ");
    gets(nome);
    for(int i=0;i<strlen(nome);i++){
        printf("%da letra: %c\n",i+1,nome[i]);
    }
    return 0;
}