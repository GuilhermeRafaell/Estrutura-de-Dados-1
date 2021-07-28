#include <stdio.h>

int main(){
    char nome[10];
    char c;
    int pos=0,i;
    printf("<< Vetor de char >>\n");

    printf("Digite um nome: ");
    c = getchar();//Le a primeira posicao do teclado

    while (c != '\n') {  //Le as demais ate encontrar o RETURN (\n)
        nome[pos] = c;
        pos++;
        c = getchar();     
    }
    printf("O nome digitado eh: %c",nome[0]);
    for(i=1;i<pos;i++){
        printf("%c",nome[i]-32);
    }
    
}