#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char nome[50];

    printf("<< Vetor de Char >>\n");

    printf("\nDigite um nome: ");
    gets(nome);
    printf("\nO nome digitado eh: %s",strupr(nome));//Tudo maiusculo(strupr();)
    printf("\nO nome digitado eh: %s",strlwr(nome));//Tudo minusculo(strlwr();)
    return 0;
}

/*Faça um programa semelhante ao anterior, 
só que o nome digitado deve ser mostrado em letras maiúsculas e também em minúsculas.
 Procure em string.h uma função que faça a conversão
*/