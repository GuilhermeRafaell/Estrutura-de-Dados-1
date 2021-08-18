#include <stdio.h>

int negativos(float *vet, int n){
    int qtd=1;
    for(int i=0; i<n; i++){
        if(vet[i] < 0){
            qtd++;
        }
    return qtd;
    }
}
int main(){
    int n,qtd;
    float *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    vet = (float *)malloc(n*sizeof(float));
    
    for(int i=0; i<n; i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%f", &vet[i]);
    }

    printf("\nO vetor principal eh: ");
    for(int i=0; i<n; i++){
        printf("%.2f ",vet[i]);
    }
    qtd = negativos(vet, n);
    printf("\nO vetor tem %d numero(s) negativo(s).",qtd);

    free(vet);
    return 0;
}

/*
=> Implemente uma função que receba como parâmetro um 
vetor de n números reais (VET) de tamanho N e retorne quantos 
números negativos há a nesse vetor. Use o seguinte protótipo:

int negativos(float *vet, int N); 

No programa principal, solicite ao usuário o tamanho do vetor, e os
valores a serem computados.
-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: -1
Digite o valor 2: 3
Digite o valor 3: -2

O vetor principal eh: -1.00, 3.00, -2.00
O vetor tem 2 numero(s) negativo(s)
-------------------------------------------------------------------------------
*/