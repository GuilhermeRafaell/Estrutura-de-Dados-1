#include <stdio.h>

int main(){
    int val[5] = {2,4,5,8,10};
    int *p;
    p = &val[2];

    printf("<< Pointers >>\n");
    printf("Digite o novo valor: ");
    scanf("%d",p);

    printf("Nova sequencia: ");
    for(int i=0;i<5;i++){
        printf("%d ",val[i]);
    }

    return 0;
}

/*
Crie um programa que contenha a seguinte variável
int val[5] = {2,4,5,8,10};
                  ^
Utilizando a função scanf, altere o valor de 5 para 6. 
Não use o operador & no scanf. Utilize uma variável do tipo inteira*
para guardar o endereço da posição do vetor.

*obs:
unsigned int (para programas em 32bit)
unsigned long int (para programas em 64)

*/