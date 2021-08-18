#include <stdio.h>

void maior_menor_vet(double *vet, int n, double *maior, double *menor){

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

void imprime_vet_double(double *vet, int n){
    int i;
    for(i=0;i<n-1;i++){
        printf("%.2lf, ", vet[i]);
    }
    printf("%.2lf\n",vet[i]);
}
int main(){
    int n;
    double *vet, maior, menor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    vet = (double *)malloc(n*sizeof(double));
    
    for(int i=0; i<n; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%lf", &vet[i]);
    }
    maior = vet[0];
    menor = vet[0];

    printf("O vetor principal eh: ");
    imprime_vet_double(vet, n);
    maior_menor_vet(vet, n, &maior, &menor);
    printf("O maior valor eh %.2lf\n", maior);
    printf("O menor valor eh %.2lf", menor);

    free(vet);
    return 0;
}

/*
=> Crie um procedimento que recebe um vetor de double como 
entrada e devolve o maior e o menor elemento do vetor. Mostre no 
programa principal o vetor, o maior e o menor elemento.


No programa principal, solicite ao usuário o tamanho do vetor, e os
valores a serem computados.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: -1
Digite o valor 2: 0.02
Digite o valor 3: 3

O vetor principal eh: -1.00, 0.02, 3.00
O maior valor eh 3.00
O menor valor eh -1.00
-------------------------------------------------------------------------------
Obs: note que para este caso, foram consideradas duas casas após o ponto. 
*/