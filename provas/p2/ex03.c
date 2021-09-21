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



int mat2D_increase_size(TMat2D *mat, int i, int j){
    int pos;
    double val = 0;

    mat->data = realloc(mat, i * j * sizeof(double));

    if(mat->data != NULL)
    {
        mat->ncolumns = j;
        mat->nrows = i;
        pos = j * mat->nrows + i;
        
        for(int k=pos+1; k< mat->nrows * mat->ncolumns; k++)
            mat->data[k]=val;
        
        return 0;
    }
}