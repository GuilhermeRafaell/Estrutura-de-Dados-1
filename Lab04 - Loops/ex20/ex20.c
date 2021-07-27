#include <stdio.h>

int main(){
    int n,j,contador=0;;

    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(j=0;j<i;j++){
            contador++;
            printf(" %d",contador);
        }
        printf("\n");
    }
    return 0;
}