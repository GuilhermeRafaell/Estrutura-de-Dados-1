#include <stdio.h>

void copiarvet(int *vet1, int *vet2, int n){
    for(int i=0; i<n; i++){
        vet2[i] = vet1[i];
    }   
}
int main(){
    int i, vet1[5]={1,2,3,4,5}, vet2[5]={1,2,3,3,6};

    printf("O vetor de origem eh: ");
    for(i=0; i<4; i++){
        printf(" %d,",vet1[i]);
    }
    printf(" %d",vet1[i]);

    printf("\n");
    printf("O vetor de destino eh: ");
    for(i=0; i<4; i++){
        printf(" %d,",vet2[i]);
    }
    printf(" %d",vet2[i]);
    
    copiarvet(vet1, vet2, 5);
    printf("\n");
    printf("O vetor de destino apos a copia eh: ");
    for(i=0; i<4; i++){
        printf(" %d,",vet2[i]);
    }
    printf(" %d",vet2[i]);

    return 0;
}

/*
=> Faça uma função para copiar um vetor inteiro para outro 
vetor. Ambos vetores devem ter o mesmo tamanho. Mostre no 
programa principal os dois vetores.

Chamada:
copiarvet(vet_origem, vet_destino, n);


Os valores são definidos na função principal.
-------------------------------------------------------------------------------
Exemplo de Saída:

O vetor de origem eh: 1, 2, 3, 4, 5
O vetor de destino eh: 1, 2, 3, 3, 6
O vetor de destino apos a copia eh: 1, 2, 3, 4, 5
-------------------------------------------------------------------------------
*/