#include <stdlib.h>
#include <string.h>
#include "aluno.h"


//Recebe como parametros ponteiro de aluno ,seu nome ,nro de matricula e C.R.A.
//Cria um novo aluno na heap ,retorna 0 pra sucesso e -1 pra erro.
int matricula_novo_aluno(aluno *p,int matricula){

    p = (aluno *)malloc(sizeof(aluno));

    if(p == NULL){
        return -1;
	}else{ 
        p->matricula = matricula;
        return 0;
    }
}