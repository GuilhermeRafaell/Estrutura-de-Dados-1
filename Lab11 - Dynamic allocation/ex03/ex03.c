#include <stdio.h>
#include <stdlib.h>
//lembre-se de incluir as bibliotecas adequadas

int main(){
    int n,res,qtdpar=0, qtdimpar=0;
    int *p;

    printf("<< Par ou Impar >>\n");
    printf("Quantos inteiros serao lidos: ");
    scanf("%d",&n);

    p = (int *)malloc(sizeof(int));

    if(p == NULL){
        printf("Erro: Memoria Insuficiente!\n");
        system("pause");
        exit(1);
    }
    
    for(int i=0; i<n; i++){
        printf("%do inteiro: ",i+1);
        scanf("%d",&p[i]);
    }
    for(int i=0; i<n; i++){
        res = p[i]%2;
        if(res == 0){
            qtdpar++;
        }else{
            qtdimpar++;
        }
    }

    printf("\nSao pares: %d dos %d inteiros lidos.\n",qtdpar,n);
    printf("Sao impares: %d dos %d inteiros lidos.\n",qtdimpar,n);
    return 0;;
    free(p);
}

/*
3) Faça um programa que leia n inteiros (definidos pelo usuário) 
armazenando-os em uma memória alocada dinamicamente. Em seguida, mostre
quantos dos n números são pares e quantos são ímpares.


Exemplo de saída:
<< Par ou Impar >>
Quantos inteiros serao lidos: 5
1º inteiro: 1
2º inteiro: 2
3º inteiro: 3
4º inteiro: 4
5º inteiro: 5

Sao pares: 2 dos 5 inteiros lidos.
Sao impares: 3 dos 5 inteiros lidos.

*/