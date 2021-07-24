#include <stdio.h>

int main(){
    int a,b;
    printf("<< Operadores Booleanos >>\n");
    printf("Digite 0 para falso e nao 0 para verdadeiro.\n");
    printf("Entre com o primeiro valor (A): ");
    scanf("%d",&a);
    printf("Entre com o segundo valor (B): ");
    scanf("%d",&b);

    if(a == 0 || b == 0){
        a=0;
        b=0;
    }else{
        a=1;
        b=1;
    }

    if(a==1 && b == 1)
        printf("A and B: VERDADEIRO\n");
        else
            printf("A and B: FALSO\n");

    if(a==1 || b==1)
        printf("A or B: VERDADEIRO\n");
        else    
            printf("A or B: FALSO\n");

    if(a==1 && b==0)
        printf("A xor B: VERDADEIRO\n");
    else if(a==0 && b==0)
        printf("A xor B: VERDADEIRO\n");
        else    
            printf("A xor B: FALSO\n");

    if(a==1)
        printf("not A: FALSO\n");
    else if(a==0)
        printf("not A: VERDADEIRO\n");


    return 0;
}