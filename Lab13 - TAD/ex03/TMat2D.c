#include <stdlib.h>
#include <time.h>
#include "TMat2D.h"

struct TMat2D
{
    int nrows;    // número de linhas
    int ncolumns; // número de colunas
    double *data; // ponteiro para os dados da matriz
};

// mat = mat2D_create(4,3);

//Cria a matriz
//dado o numero de linhas e colunas
//Retorno NULL para erro, Struct TadMat para sucesso
TMat2D *mat2D_create(int nrows, int ncolumns)
{
    TMat2D *mat;
    mat = malloc(sizeof(TMat2D));
    if (mat != NULL)
    {
        mat->data = malloc(nrows * ncolumns * sizeof(double));
        if (mat->data != NULL)
        {
            mat->ncolumns = ncolumns;
            mat->nrows = nrows;
        }
        else
        {
            free(mat);
            return NULL;
        }
    }
    return mat;
}

//Libera a memoria
//dado o ponteiro para a struct
//Retorno -1 para erro e 0 para sucesso
int mat2D_free(TMat2D *mat)
{
    if (mat == NULL)
        return -1;

    else
    {
        free(mat->data);
        free(mat);
        return 0;
    }
}

//Escreve um valor na posicao desejada da matriz
//dado o ponteiro para a struct, a posicao(linha e coluna) e o valor
//Retorno -1 para erro e 0 para sucesso
int mat2D_set_value(TMat2D *mat, int i, int j, double val)
{

    if (mat == NULL)
        return -1;

    else
    {
        int pos;
        pos = j * mat->nrows + i; //formula q transforma posicao da matriz em um vetor
        mat->data[pos] = val;
        return 0;
    }
}

//Acessa uma posicao da matriz
//dado o ponteiro para a struct, a posicao(linha e coluna), e um ponteiro para double(aux)
//Retorno -1 para erro e 0 para sucesso
int mat2D_get_value(TMat2D *mat, int i, int j, double *val)
{
    if (mat == NULL)
        return -1;

    else
    {
        int pos;
        pos = j * mat->nrows + i;
        *val = mat->data[pos];
        return 0;
    }
}

//Preenche uma matriz com valores aleatorios
//dado o ponteiro para a struct e o valor maximo de preenchimento
//Retorno -1 para erro e 0 para sucesso
int fill_random_mat(TMat2D *mat, double max)
{
    if (mat == NULL)
        return -1;

    else
    {
        srand(time(NULL));

        for (int i = 0; i < mat->nrows * mat->ncolumns; i++)
            mat->data[i] = (rand() / (double)RAND_MAX) * max;

        return 0;
    }
}

//Soma duas matrizes
//dado dois ponterios para as structs a serem somadas e um para o resultado
//Retorno -1 para erro e 0 para sucesso
int sum_mat(TMat2D *mat1, TMat2D *mat2, TMat2D *res)
{
    int i;

    if (mat1 == NULL || mat2 == NULL || mat1->nrows != mat2->nrows || mat1->ncolumns != mat2->ncolumns)
        return -1;

    else
    {
        for (i = 0; i < mat1->nrows * mat1->ncolumns; i++)
            res->data[i] = mat1->data[i] + mat2->data[i];

        return 0;
    }
}

//Multiplica duas matrizes
//dado dois ponteiros para as structs a serem multiplicadas e um para o resultado
//Retorno -1 para erro e 0 para sucesso
int multiplie_mat(TMat2D *mat1, TMat2D *mat2, TMat2D *res)
{
    if (mat1 == NULL || mat2 == NULL || res == NULL)
        return -1;

    else if (mat1->ncolumns != mat2->nrows || mat1->nrows != res->nrows || mat2->ncolumns != res->ncolumns)
        return -1;

    else
    {
        int i, j, j2, pos1, pos2, pos3;
        double total = 0;

        for (i = 0; i < mat1->nrows; i++)
        {

            for (j2 = 0; j2 < mat2->ncolumns; j2++)
            {

                for (j = 0; j < mat1->ncolumns; j++)
                {

                    pos1 = j * mat1->nrows + i;
                    pos2 = j2 * mat2->nrows + j;

                    total += mat1->data[pos1] * mat2->data[pos2];
                }

                pos3 = j2 * res->nrows + i;
                res->data[pos3] = total;
                total = 0;
            }
        }
        return 0;
    }
}

//Multiplica uma matriz por um numero
//dado o ponteiro para a struct, ponteiro para a struct resultado e o valor a ser multiplicado
//Retorno -1 para erro e 0 para sucesso
int multiplieNum_mat(TMat2D *mat, TMat2D *res, double num)
{
    int i, j;
    if (mat == NULL || res == NULL)
        return -1;

    else
    {
        for (i = 0; i < mat->nrows * mat->ncolumns; i++)
            res->data[i] = mat->data[i] * num;

        return 0;
    }
}

//Traco ou soma da diagonal principal de uma matriz
//dado o ponteiro para a struct e o ponterio de double para receber a soma
//Retorno -1 para erro e 0 para sucesso
int calc_trace(TMat2D *mat, double *res)
{
    if (mat == NULL)
        return -1;

    else
    {
        int i, j, pos;
        double aux;
        for (i = 0; i < mat->nrows; i++)
        {
            for (j = 0; j < mat->ncolumns; j++)
            {
                if (i == j)
                {
                    pos = j * mat->nrows + i;
                    aux += mat->data[pos];
                }
            }
        }
        *res = aux;
        return 0;
    }
}

//Vetor com a soma das colunas
//dado o ponteiro para a struct e o endereco de um ponteiro que sera o vetor
//Retorno -1 para erro e 0 para sucesso
int vet_sum_colums(TMat2D *mat, double **sumC)
{
    if (mat == NULL)
        return -1;

    else
    {
        int i, j, pos;

        *sumC = calloc(mat->ncolumns, sizeof(double));

        for (i = 0; i < mat->nrows; i++)
        {
            for (j = 0; j < mat->ncolumns; j++)
            {

                pos = j * mat->nrows + i;
                (*sumC)[j] += mat->data[pos];
            }
        }
        return 0;
    }
}

//Vetor com a soma das linhas
//dado o ponteiro para a struct e o endereco de um ponteiro que sera o vetor
//Retorno -1 para erro e 0 para sucesso
int vet_sum_rows(TMat2D *mat, double **sumR)
{
    if (mat == NULL)
        return -1;

    else
    {
        int i, j, pos;

        *sumR = calloc(mat->nrows, sizeof(double));

        for (i = 0; i < mat->nrows; i++)
        {
            for (j = 0; j < mat->ncolumns; j++)
            {

                pos = j * mat->nrows + i;
                (*sumR)[i] += mat->data[pos];
            }
            return 0;
        }
    }
}