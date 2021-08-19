#include <stdio.h>
#include <stdlib.h>

double *to_double(int *vet,int n){
    int i;
    double *p;

    p = (double *)malloc(n*sizeof(double));

    for(i=0; i<n; i++){
        p[i] = vet[i];
    }

    return p;
}

int main(){
    int i, n, *vet_origem;
    double *vet_double; 
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    vet_origem = (int *)malloc(n*sizeof(int));

    for(i=0; i<n; i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&vet_origem[i]);
    }

    printf("\nO vetor de origem eh:");
    for(i=0; i<n-1; i++){
        printf(" %d,",vet_origem[i]);
    }
    printf(" %d",vet_origem[i]);

    vet_double = to_double(vet_origem,n);

    printf("\nO vetor convertido para double eh:");
    for(i=0; i<n-1; i++){
        printf(" %.2lf,",vet_double[i]);
    }
    printf(" %.2lf\n",vet_double[i]);   

    free(vet_origem);
    free(vet_double);
    
    return 0;
}

/*
=> Faça a função to_double, que recebe um vetor de inteiro e 
retorna um vetor com o mesmo conteúdo, mas convertido para 
double.

Chamada:
vet_double = to_double(vet_int,n);

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 4
Digite o valor 1: 1
Digite o valor 2: 3
Digite o valor 3: 5
Digite o valor 4: 4

O vetor de origem eh: 1, 3, 5, 4
O vetor convertido para double eh: 1.00, 3.00, 5.00, 4.00
-------------------------------------------------------------------------------
*/