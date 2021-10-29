/* ex03
Crie uma função que faz a junção de dois vetores inteiros. 
A função deve ter como entrada os dois vetores e seus
respectivos tamanhos. A alocação de espaço necessário para
o vetor concatenado deve ser feita dentro da função 
(a função então deve devolver para o programa principal 
o vetor alocado e também o tamanho desse novo vetor). 
A função deve retornar um valor inteiro: (0 - zero)
se a junção ocorreu de forma correta; (-1) em caso de erro.
Mostre o uso da função no programa principal. Não é
permitido criar novos tipos de dados para a solução
do exercício (ou seja, sem uso de structs).


Vetor 1: [1, 5, 2]
Vetor 2: [10, 30] 
Concatenção Vetor 1, Vetor 2

Vetor Concatenado = [ 1, 5, 2, 10, 30]

*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void criaVetor(int v[], int v1[], int v2[]) {
    for (int i = 0; i < 5; i++)
        v[i] = v1[i];
    
    for (int i = 0; i < 5; i++) 
        v[i + 5] = v2[i];
}

int concatena_vet(int *vet1, int tam1, int *vet2, int tam2, int **result, int **tamresult){
    int i;
    *result =(int *) malloc(tam1+tam2 * sizeof(int));
    *tamresult = tam1+tam2;

    if(result == NULL){
        return -1;
    }

    else{    
        for(i=0; i<tam1; i++){
            (*result)[i] = vet1[i];
        }

        for(i=0; i<tam2; i++){    
            (*result)[i + tam1] = vet2[i];
        }
    return 0;
    }
}

int main(void){
    int vet1[] = {1, 5, 2};
    int vet2[] = {10, 30};
    int *result;
    int *tam;

    printf("Vetor 1: ");
    for(int i=0; i<3; i++){
        printf("%d ",vet1[i]);
    }

    printf("\nVetor 2: ");
    for(int i=0; i<2; i++){
        printf("%d ",vet2[i]);
    }

    concatena_vet(vet1, 3, vet2, 2, &result, &tam);


    printf("\n\nVetor Concatenado = ");
    for(int i=0; i<5; i++){
        printf("%d ",result[i]);
    }
    
    free(result);
}