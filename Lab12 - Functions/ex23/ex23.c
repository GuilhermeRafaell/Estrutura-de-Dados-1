#include <stdio.h>
#include <math.h>

void imprime_vet_int(int *veti, int n){
    for(int i=0; i<n; i++){
        printf(" %d ",veti[i]);
    }
    return 0;
}

int negativos(float *vet, int n){
    int qtd=1;
    for(int i=0; i<n; i++){
        if(vet[i] < 0){
            qtd++;
        }
    return qtd;
    }
}

void abs_vet(int *vet, int n){
    
    for(int i=0; i<n; i++){
        vet[i] = abs(vet[i]);
    }
}

void maior_menor_vet(int *vet, int n, int *maior, int *menor){

    for(int i=0;i<n;i++){
        if(*maior < vet[i]){
            *maior = vet[i];
        }
        if(*menor > vet[i]){
            *menor = vet[i];
        }
    }
    return 0;
}

void copiarvet(int *vet1, int *vet2, int n){
    for(int i=0; i<n; i++){
        vet2[i] = vet1[i];
    }   
}

void multvet(int *vet, int n, int num){
    for(int i=0; i<n; i++){
        vet[i] = vet[i] * num;
    }
}

int main(){
    int i, *vet, *vet2, *vetaux, n, qtd, maior, menor, num;

    printf("Entre com o tamanho do vetor: ");
    scanf("%d",&n);

    vet = (int *)malloc(n*sizeof(int));

    for(i=0; i<n; i++){
        printf("Entre com o elemento %d: ",i+1);
        scanf("%d",&vet[i]);
    }

    printf("\nVetor:");
    imprime_vet_int(vet, n);

    maior = vet[0];
    menor = vet[0];

    maior_menor_vet(vet, n, &maior, &menor);
    printf("\nMaior: %d   Menor: %d",maior,menor);

    qtd = negativos(vet, n);
    printf("\nNumeros negativos: %d",qtd);

    vetaux = (int *)malloc(n*sizeof(int));
    copiarvet(vet, vetaux, n);//Utilizo vetaux para mostar vet com a funcao abs().
    abs_vet(vetaux, n);
    printf("\nVetor absoluto:");
    imprime_vet_int(vetaux, n);

    printf("\n");
    printf("\nCopiando para outro vetor (alocado dinamicamente)\n");
    printf("\nVetor original:");
    imprime_vet_int(vet, n);

    vet2 = (int *)malloc(n*sizeof(int));
    copiarvet(vet, vet2, n);
    printf("\nVetor copiado: ");
    imprime_vet_int(vet2 ,n);
    
    printf("\n");
    printf("\nEntre com o valor escalar para multiplicar o vetor original: ");
    scanf("%d",&num);

    multvet(vet, n, num);
    printf("\nVetor original:");
    imprime_vet_int(vet, n);
    printf("\nVetor copiado");
    imprime_vet_int(vet2, n);

    free(vet);
    free(vet2);
    free(vetaux);
    
    return 0;
}

/*
=> Use as funções criadas nos exercícios anteriores em um único 
programa, mas agora trabalhe com vetores alocados 
dinamicamente no programa principal. Lembre-se de liberar a 
memória depois de usar os vetores.


No programa principal, solicite ao usuário o tamanho do vetor, os valores
a serem computados e posteriormente, o valor escalar para multiplicação do vetor.

-------------------------------------------------------------------------------
Exemplo de Saída:

Entre com o tamanho do vetor: 4
Entre com o elemento 1: 50
Entre com o elemento 2: 20
Entre com o elemento 3: 10
Entre com o elemento 4: -30

Vetor: 50, 20, 10, -30
Maior: 50   Menor: -30
Numero de negativos: 1
Vetor absoluto: 50, 20, 10, 30

Copiando para outro vetor (alocado dinamicamente)

Vetor original: 50, 20, 10, -30
Vetor copiado: 50, 20, 10, -30

Entre com o valor escalar para multiplicar o vetor original: 10

Vetor original: 500, 200, 100, -300
Vetor copiado: 50, 20, 10, -30
-------------------------------------------------------------------------------
*/