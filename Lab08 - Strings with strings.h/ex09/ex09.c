#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char palavra[10];

    printf("<< Invertendo >>\n");
    printf("\nDigite a string: ");
    gets(palavra);

    printf("\nSaida invertida: ");
    for(int i=strlen(palavra);i>=0;i--){
        printf("%c",palavra[i]);
    }
}