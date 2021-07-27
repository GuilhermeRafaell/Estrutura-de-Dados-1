#include <stdio.h>

int main(){
    int res=0,num;

    printf("<< Numeros primos >>\n");
    printf("Entre com o valor: ");
    scanf("%d",&num);

    for (int i=2;i<=num/2;i++){
        if (num % i == 0) {
            res++;
            break;
        }
    }

    //Verifica se eh primo 
    if(res == 0){
       printf("O numero %d eh primo\n",num);
    }else{
        printf("O numero %d nao eh primo\n",num);
    }
}