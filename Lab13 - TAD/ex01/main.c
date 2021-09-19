#include <stdio.h>
#include "aluno.h"

int main(){
    aluno p[2];


    for(int i=0; i<2; i++){
        printf("\nInforme o nome, o numero de matricula e o C.R.A do aluno %d:\n",i+1);
        printf("Nome: ");
        scanf("%s", p[i].nome);
        printf("Matricula: ");
        scanf("%d", &p[i].matricula);
        printf("C.R.A: ");
        scanf("%f", &p[i].cra);
    }

    printf("\nInserindo novo aluno");
    if(matricula_novo_aluno(&p[1], 213) == 0){
        printf("\n\nAluno matriculado com sucesso.");
    }else{
        printf("\n\nErro: Aluno nao matriculado.");
    }

}