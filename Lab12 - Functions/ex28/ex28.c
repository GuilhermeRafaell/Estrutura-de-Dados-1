#include<stdio.h>
/*
A solucao eh declarar o vet_destino como um ponteiro, passar o endereco, depois fazer
a funcao receber ele como um ponteiro de ponteiro, e alocar no desreferenciamento do vet_destino
*/

void copiarvet(double *vet, double **vet2, int n){
    *vet2=(double *)malloc(n*sizeof(double));

    for(int i=0; i<n; i++){
        (*vet2)[i]=vet[i];
    }
}

int main(){
    int i, n=5;
    double *vet_origem, *vet_destino;

    vet_origem=(double *)calloc(n,sizeof(double));

    copiarvet(vet_origem, &vet_destino, n);

    printf("\nO vetor de origem eh:");
    for(i=0; i<n-1; i++){
        printf(" %.2lf,", vet_origem[i]);
    }
    printf(" %.2lf\n", vet_origem[i]);

    printf("O vetor de destino eh:");
    for(i=0; i<n-1; i++){
        printf(" %.2lf,", vet_destino[i]);
    }
    printf(" %.2lf\n", vet_destino[i]);

    free(vet_origem);
    free(vet_destino);

}

/*
=> Tente fazer uma função que copia um vetor de double para 
um outro vetor. Esse outro vetor é alocado dentro da função que 
faz a cópia.  Mostre vet_destino no programa principal.

Chamada:
copiarvet(vet_origem, vet_destino, n);

Explique porque a função não funciona. Faça o mapa de memória 
(antes, durante, e depois da chamada da função). Qual seria a 
solução para uma função deste tipo?

-------------------------------------------------------------------------------
Observação:

Utilize o excel para fazer o mapa de memória (Modelo disponível nos
arquivos do Teams).
-------------------------------------------------------------------------------
*/