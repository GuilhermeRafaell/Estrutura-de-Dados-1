#include <stdio.h>

void imprime_vet_int(int *veti, int n){
    for(int i=0; i<n; i++){
        printf("%d ",veti[i]);
    }
    return 0;
}
void imprime_vet_float(float *vetf, int n){
    for(int i=0; i<n; i++){
        printf("%.2f ",vetf[i]);
    }
    return 0;
}
void imprime_vet_double(double *vetd, int n){
    for(int i=0; i<n; i++){
        printf("%.2lf ",vetd[i]);
    }
    return 0;
}

int main(){
    int n = 5;
    int veti[] = {1,2,3,4,5};
    float vetf[] = {1.20, 2.30, 3.40, 4.50, 5.50};
    double vetd[] = {1.20, 2.30, 3.40, 4.50, 5.50};

    printf("Os valores inseridos neste vetor de inteiros eh: ");
    imprime_vet_int(veti,n);

    printf("\nOs valores inseridos neste vetor de float eh: ");
    imprime_vet_float(vetf,n);

    printf("\nOs valores inseridos neste vetor de double eh: ");
    imprime_vet_double(vetd,n);

    return 0;
}

/*
=> Crie três funções chamadas imprime_vet_int, 
imprime_vet_double, imprime_vet_float que mostra o conteúdo de 
um vetor de inteiros, double, e float, respectivamente. Use essas 
funções sempre que precisar mostrar um vetor.


Exemplo de Chamada:

    imprime_vet_int(vetori,n);
    imprime_vet_double(vetord,n);
    imprime_vet_float(vetorf,n);

-------------------------------------------------------------------------------
Exemplo de Saída:

Os valores inseridos neste vetor de inteiros eh: 1 2 3 4 5 
Os valores inseridos neste vetor de float eh: 1.20 2.30 3.40 4.50 5.50 
Os valores inseridos neste vetor de double eh: 1.20 2.30 3.40 4.50 5.50 
-------------------------------------------------------------------------------
*/