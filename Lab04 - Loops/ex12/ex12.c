#include <stdio.h>

int main(){
    int aux,soma=0,num;

    printf("<< Soma de n valores naturais >>\n");
    printf("Quantos numeros deseja somar? ");
    scanf("%d",&num);

    aux = num;

    for(num;num>0;num--){
        soma = soma + num;
    }
    printf("A soma dos %d primeiros numeros naturais eh: %d\n",aux,soma);
}