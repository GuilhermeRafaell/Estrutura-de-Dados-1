#include <stdio.h>
#include <math.h>

void abs_vet(int *vet, int n){
    
    for(int i=0; i<n; i++){
        vet[i] = abs(vet[i]);
    }
}
int main(){
    int i, n, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    vet = (int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&vet[i]);
    }

    printf("\nO vetor de origem eh:");
    for(i=0; i<n-1; i++){
        printf(" %d,",vet[i]);
    }
    printf(" %d",vet[i]);
    
    abs_vet(vet, n);
    printf("\nO vetor com valores absolutos eh:");
    for(i=0; i<n-1; i++){
        printf(" %d,",vet[i]);
    }
    printf(" %d",vet[i]);

    free(vet);
    return 0;
}

/*
=> Faça uma função para transformar os números de um vetor 
de inteiros em seu valor absoluto (use a função abs (math.h)).

Chamada:
    abs_vet(vet);

No programa principal, solicite ao usuário o tamanho do vetor e os valores
a serem computados. Imprima o vetor de origem e o vetor com valores absolutos.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: 1
Digite o valor 2: -1
Digite o valor 3: 2

O vetor de origem eh: 1, -1, 2
O vetor com valores absolutos eh: 1, 1, 2
-------------------------------------------------------------------------------
*/