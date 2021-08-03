#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
//Valores aleatorios de 0 a 100 foram atribuidos as matrizes
int main() {
    int tam = 3;
    int A[tam][tam],B[tam][tam],C[tam][tam];//matriz A B e C
    int l,c,produto;

    srand (time(NULL));
    
    for(l=0; l<tam; l++){
        for(c=0; c<tam; c++){
            A[l][c] = rand() % 100;//sorteia valor para os elem da matriz A.
            B[l][c] = rand() % 100;//sorteia valor para os elem da matriz B.            
            produto = 0;
            for(int i=0; i<tam; i++){
                produto += A[l][i] * B[i][c];
                C[l][c] = produto;
            }
            
            //A[l][c] = rand() % 100;//sorteia valor para os elem da matriz A.
            //B[l][c] = rand() % 100;//sorteia valor para os elem da matriz B.
            //C[l][c] = A[l][c] + B[l][c];//soma os valores das matrizes A e B e salva em C.       
        }
    }

    printf("<< Matriz A >>\n");
    for(l=0; l<tam; l++){
        for(c=0; c<tam; c++)
            printf("%3d ",A[l][c]);
        printf("\n");
    }

    printf("<< Matriz B >>\n");
    for(l=0; l<tam; l++){
        for(c=0; c<tam; c++)
            printf("%3d ",B[l][c]);
        printf("\n");
    }

    printf("<< Produto >>\n");
    for(l=0; l<tam; l++){
        for(c=0; c<tam; c++)
            printf("%3d ",C[l][c]);
        printf("\n");
    }     
  
    return 0;
}