#include <stdio.h>

int main(){
    char nome[6];
    char c;
    int pos=0,i;
    printf("<< Vetor de char >>\n");

    printf("Digite um nome: ");
    c = getchar();

    while (c != '\n') {  
        nome[pos] = c;
        pos++;
        c = getchar();     
    }
    printf("O nome digitado eh: ");
    for(i=0;i<pos;i++){
        printf("%c",nome[i]);
    }
    
}