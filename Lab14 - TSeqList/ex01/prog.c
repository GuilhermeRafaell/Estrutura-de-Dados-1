#include <stdio.h>
#include <stdlib.h>
#include "TSeqList.h"

int main(){
    struct aluno a[4] = {{2,"Joao",9.5, 7.8, 8.5},{4,"Rafael",7.5, 8.7, 6.8}, 
                        {1,"Brenda",9.7, 6.7, 8.4},{3,"Diego",5.7, 6.1, 7.4}};

    Lista *lista_alunos_facom;
    lista_alunos_facom = cria_lista();

    for(int i=0; i<4; i++)
        insere_lista_ordenada(lista_alunos_facom,a[i]);

    imprime_lista(lista_alunos_facom);
    printf("\n\n\n\n");

    for(int i=0; i<5; i++){
        if(remove_lista_otimizado(lista_alunos_facom,i) == -1)
            printf("Erro\n");
        
        imprime_lista(lista_alunos_facom);
        printf("\n\n\n\n");
    }

    libera_lista(lista_alunos_facom);
    system("pause");
    return 0;
}