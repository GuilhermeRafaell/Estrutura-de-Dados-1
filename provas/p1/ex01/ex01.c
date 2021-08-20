#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Fazer um programa para cadastro de livros. As informações para cadastro são: 
// - o nome do livro
// - O preço
// - Indicação se o livro é novo ou usado
// - ano de compra


// Definir as estruturas necessárias aqui:
typedef struct livro{
    char nome[10], indicacao[10];
    float preco;
    int ano;
}livro;


int main(){
    livro *p;
    int n;
    // Ex 01: permitir que o usuário cadastre quantos livros quiser
    //  - ler do teclado a quantidade de livros que o usuário escolheu
    //  - ler do teclado as informações dos livros
    printf("Informe quantos livros deseja cadastrar: ");
    scanf("%d",&n);
    
    p = (livro *)malloc(n*sizeof(livro));

    for(int i=0; i<n; i++){
        printf("Informe o nome do livro: ");fflush(stdin);
        fgets(p[i].nome,10,stdin);fflush(stdin);
        printf("Informe o preco do %d livro: ",i+1);
        scanf("%f",&p[i].preco);fflush(stdin);
        printf("Indicacao do %d livro (novo ou usado): ",i+1);
        fgets(p[i].indicacao,10,stdin);fflush(stdin);
        printf("Informe o ano de compra do %d livro: ",i+1);
        scanf("%d",&p[i].ano);fflush(stdin);
    }

    for(int i=0; i<n; i++){
        printf("\nNome do %d livro: %s",i+1,p[i].nome);
        printf("\nPreco do %d livro: %.2f",i+1,p[i].preco);
        printf("\nIndicacao do %d livro: %s",i+1, p[i].indicacao);
        printf("\nAno de compra do %d livro: %d",i+1, p[i].ano);
        printf("\n");
    }   
  
    free(p);
    
    return 0;
}