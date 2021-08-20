#include <stdio.h>
#include <stdlib.h>

// Definir as estruturas necessárias aqui (copiar do exercício anterior):
typedef struct livro{
    char nome[10], indicacao[10];
    float preco;
    int ano;
}livro;
// Função:
// Essa função retorna o livro usado mais antigo
// - Entrada: todos os livros cadastrados 
// - Saída: índice do vetor indicando o livro usado mais antigo
// (se houver empate pode ser retornado qualquer um dos livros)
int mais_antigo(livro *p, int n){//Parametros: todos Livros cadastrados e sua qtd
    int antigo = p[0].ano;
    int indice_antigo;
    for(int i=0;i<n; i++)
    {
        if(p[i].indicacao == "usado")
        {
            if(antigo > p[i].ano)
            {
                antigo = p[i].ano;
                indice_antigo = i;
            }
        }

    }
    return indice_antigo;
}

int main(){
    int i,aux,n;
    livro *p;
   // Ex02: utilizando a função de buscar, mostre
   // todas as informações do livro *usado* mais antigo
    printf("Informe quantos livros deseja cadastrar: ");
    scanf("%d",&n);

    p = (livro *)malloc(n*sizeof(livro));

    for(int i=0; i<n; i++){
        printf("Informe o nome do %d livro: ",i+1);fflush(stdin);
        fgets(p[i].nome,10,stdin);fflush(stdin);
        printf("Informe o preco do %d livro: ",i+1);
        scanf("%f",&p[i].preco);fflush(stdin);
        printf("Indicacao do %d livro (novo ou usado): ",i+1);
        fgets(p[i].indicacao,10,stdin);fflush(stdin);
        printf("Informe o ano de compra do %d livro: ",i+1);
        scanf("%d",&p[i].ano);fflush(stdin);
    }

    aux = mais_antigo(p,n);
   // Todas as funções de entrada e saída devem estar no programa
   // principal

   // Dica: para testar, crie um vetor estático preenchido com alguns valores (opcional)
   printf("Livro usado mais antigo possui indice: %d",aux);

    free(p);

    return 0;
}