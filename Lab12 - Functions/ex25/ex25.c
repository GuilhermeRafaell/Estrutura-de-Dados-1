#include <stdio.h>

double *copiarvet(double *vet, int n){
    int i;
    double *p;

    p = (double *)malloc(n*sizeof(double));

    for(i=0; i<n; i++){
        p[i] = vet[i];
    }  

    return p;
}


int main(){
    int n=5,i;
    double vet_origem[5] = {1.2, 2.0, 3.2, 4.0, 5.1};
    double *vet_destino;

    vet_destino = copiarvet(vet_origem,n);

    printf("O vetor de origem eh:");
    for(i=0; i<n-1; i++){
        printf(" %.2lf,", vet_origem[i]);
    }
    printf(" %.2lf\n", vet_origem[i]);
    
    printf("O vetor de destino eh:");
    for(i=0; i<n-1; i++){
        printf(" %.2lf,", vet_destino[i]);
    }
    printf(" %.2lf\n", vet_destino[i]);


    free(vet_destino);
    return 0;
}

/*
=> Faça uma função que copia um vetor de double para um 
outro vetor. Esse outro vetor é alocado dentro da função que faz a 
cópia. Mostre os dois vetores.

Chamada:
vet_destino  = copiarvet(vet_origem,  n);

-------------------------------------------------------------------------------
Exemplo de Saída:

O vetor de origem eh: 1.20, 2.00, 3.20, 4.00, 5.10
O vetor de destino eh: 1.20, 2.00, 3.20, 4.00, 5.10
-------------------------------------------------------------------------------
*/