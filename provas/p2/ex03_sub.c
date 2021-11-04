#include <stdlib.h>
#include <stdio.h>
/*
 3) Considerando o TAD Matriz implementado em aula², crie uma nova 
função que permite aumentar o tamanho da matriz (mat2d_increase_size).
Os elementos da matriz original devem continuar na mesma posição que
estavam antes do aumento. Os novos elementos devem receber valor 0.
Por exemplo, caso o usuário tenha uma matriz 2x2 e queria que ela vire uma 
matriz 3x3, ele poderá usar a função de aumento de tamanho como
abaixo:

// criando matriz 2x2
mat = mat2D_create(2,2);

// Exemplo de preenchimento
// |2 7|
// |4 5|

// aumentando o tamanho da matriz para 3x3
mat2d_increase_size(mat,3,3)

// Exemplo após o aumento de tamanho
// |2 7 0|
// |4 5 0|
// |0 0 0|

*/

struct TMat2D
{
  int nrows; // número de linhas
  int ncolumns; // número de colunas
  double *data; // ponteiro para os dados da matriz
};

typedef struct TMat2D TMat2D;

// check:<<<erro: e3.1: não fez os testes comparando o tamanho novo com o antiga para saber se o tamanho é maior OU fez o teste considerando somente o total de elementos>>>>
// check:<<<erro: e3.2: O ideal é  utilizar uma outra variável para receber o que é retornado pelo realloc, pois se ele não funcionar os dados originais estarão preservados>>>>
// check:<<<erro: e3.3: deve-se lembrar da representação linear da matriz na memória. Isso implica em reposicionar alguns elementos no vetor linear que estavam na matriz original>>>>
// check:<<<erro: e3.5: Faltou atualizar o número de linhas e colunas da struct do tad >>>>

int mat2D_increase_size(TMat2D *mat, int nrow, int ncol){
    if(mat == NULL)
        return -1;
    
    if(nrow <= mat->nrows || ncol <= mat->ncolumns)
        return -1;

    double *newmat;
    newmat = malloc(nrow*ncol*sizeof(double));
    if(newmat == NULL)
        return -1;

    else{
        int pos, pos2;
        for(int i=0; i<nrow; i++){
            for(int j=0; j<ncol; j++){

                pos = j * nrow + i;//representacao linear da nova matriz

                for(int a=0; a<mat->nrows; a++){
                    for(int b=0; b<mat->ncolumns; b++){
                        pos2 = b * mat->nrows + a;//representacao linear da matriz original

                        if(i < mat->nrows && j < mat->ncolumns){
                            newmat[pos] = mat->data[pos2];
                        }
                        else{
                            newmat[pos] = 0;
                        }
                    }
                }
            }
        }
        mat->nrows = nrow;
        mat->ncolumns = ncol;
        free(mat->data);
        mat->data = newmat;
    }
    return 0;
}