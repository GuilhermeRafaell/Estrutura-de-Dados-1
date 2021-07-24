#include <stdio.h>
#include <math.h>

int main(){
    int num,aux;
    float numpreciso;//Pega a primeira casa e ignora as outras
    printf("<< Quadrado Perfeito >>\n");
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    numpreciso = sqrt(num);//Calculando a raiz do numero
    aux = numpreciso;//Para verificar se sua raiz vai ser inteira ou real

    if(numpreciso<=aux){  
        printf("\nO Numero Digitado e um Quadrado Perfeito");
        printf("\nRaiz Quadrada de %d: %.f\n\n",num ,sqrt(num));
    }else        
        printf("\nO Numero Digitado nao e um Quadrado Perfeito\n\n");
        
    return 0;
}