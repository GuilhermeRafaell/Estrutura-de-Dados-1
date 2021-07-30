#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char string[10],aux[10];
    int n=0;
    printf("<< Palindormo >>\n");
    printf("Digite a palavra par verificar se eh um palindromo: ");
    gets(string);
    
    for(int i=strlen(string)-1; i>=0;i--){ //-1 para ignorar o '\0'
        aux[n] = string[i];
        n++;
    }
    aux[n] = '\0';

    if(strcmp(string,aux) == 0){
        printf("\nPalindromo!");
    }else{
        printf("\nNao eh Palindromo.");
    }
}