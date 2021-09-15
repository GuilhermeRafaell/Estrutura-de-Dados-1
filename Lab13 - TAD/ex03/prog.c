#include <stdio.h>
#include <stdlib.h>
#include "TMat2D.h"

int show_mat(TMat2D *p, int nlin, int ncol, double *val);

int main()
{
    TMat2D *p, *mat[3], *mult, *multC;
    int nlin, ncol, i, j, aux;
    double max, val, traco, num, *sl, *sc;

    printf("Digite a quantidade de linhas e colunas da matriz: ");
    scanf("%d %d", &nlin, &ncol);
    p = mat2D_create(nlin, ncol); //criar matriz

    printf("Digite um valor maximo para preencher a matriz: ");
    scanf("%lf", &max);
    fill_random_mat(p, max); //preencher matriz

    printf("Digite a posicao que deseja alterar: ");
    scanf("%d %d", &i, &j);
    printf("Digite o valor a ser inserido: ");
    scanf("%lf", &val);
    mat2D_set_value(p, i, j, val); //modificar matriz

    printf("Digite a posicao que deseja visualizar: ");
    scanf("%d %d", &i, &j);
    mat2D_get_value(p, i, j, &val); //visualizar posicao da matriz
    printf("\nO valor de Mat[%d][%d] eh %.1lf\n", i, j, val);

    show_mat(p, nlin, ncol, &val); //mostrar toda a matriz

    printf("\nSomando duas matrizes\n");
    for (i = 0; i < 2; i++)
    {
        mat[i] = mat2D_create(nlin, ncol);
        fill_random_mat(mat[i], max);
        printf("\nMatriz %d\n", i + 1);
        show_mat(mat[i], nlin, ncol, &val);
    }
    mat[2] = mat2D_create(nlin, ncol);
    aux = sum_mat(mat[0], mat[1], mat[2]); //soma duas matrizes
    if (aux == -1)
    {
        printf("Nao foi possivel fazer a soma\n");
    }
    else
    {
        printf("\nSoma\n");
        show_mat(mat[2], nlin, ncol, &val);
    }

    calc_trace(mat[2], &traco); //traco ou soma da diagonal principal da matriz
    printf("\nTraco da Matriz Soma: %.1lf\n", traco);

    printf("\nMatriz 1 x Matriz 2\n");
    mult = mat2D_create(nlin, ncol);
    aux = multiplie_mat(mat[0], mat[1], mult); //multiplicacao de duas matrizes
    if (aux == -1)
    {
        printf("Nao foi possivel fazer a multiplicacao\n");
    }
    else
    {
        show_mat(mult, nlin, ncol, &val);
    }

    printf("\nDigite o numero que pra multiplicar a matriz soma: ");
    scanf("%lf", &num);
    multC = mat2D_create(nlin, ncol);
    multiplieNum_mat(mat[2], multC, num); //multiplica uma matriz por um numero escalar
    printf("\nMatriz Soma multilicada por %.1lf\n", num);
    show_mat(multC, nlin, ncol, &val);

    printf("\nVetor com a soma das linhas da Matriz Soma: ");
    vet_sum_rows(mat[2], &sl); //somas das linhas da matriz
    for (i = 0; i < nlin; i++)
    {
        printf("%.1lf ", sl[i]);
    }

    printf("\nVetor com a soma das colunas da Matriz Soma: ");
    vet_sum_colums(mat[2], &sc); //somas das colunas da matriz
    for (i = 0; i < ncol; i++)
    {
        printf("%.1lf ", sc[i]);
    }

    mat2D_free(p); //libera matriz
    for (i = 0; i < 3; i++)
    {
        mat2D_free(mat[i]);
    }
    mat2D_free(mult);
    mat2D_free(multC);
    free(sl);
    free(sc);

    return 0;
}

int show_mat(TMat2D *p, int nlin, int ncol, double *val)
{
    int i, j;
    printf("\n");
    for (i = 0; i < nlin; i++)
    {
        for (j = 0; j < ncol; j++)
        {
            mat2D_get_value(p, i, j, val);
            printf("%5.1lf ", *val);
        }
        printf("\n");
    }
}