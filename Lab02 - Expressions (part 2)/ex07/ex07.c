#include <stdio.h>

int main() {
    int a,b;
    int True=1;

    printf("== Operadores Booleanos ==\n");
    printf("Digite 0 para falso e nao 0 para verdadeiro\n");
    printf("Entre com o primeiro valor (A): ");
    scanf("%d",&a);
    printf("Entre com o segundo valor (B): ");
    scanf("%d",&b);

    if(a && b)
        printf("A and B: 1\n");
        else
        printf("A and B: 0\n");

    if(a || b)
        printf("A or B: 1\n");
        else
        printf("A or B: 0\n");

    if((a || b) && !(a && b))
        printf("A xor B: 1\n");
        else
        printf("A xor B: 0\n");

    if(a!=0)
        printf("not A: 0\n");

    if(a==0)
        printf("not A: 1\n");
    
}

/*
=> Faça um algoritmo que mostre o funcionamento dos operadores lógicos. Peça para o usuário entrar com dois valores inteiros,, 
onde 0 implica em FALSO e qualquer outro número implica em VERDADEIRO.
Obs: XOR = (p || q) && !(p && q)

-------------------------------------------------------------------------------
Exemplo de saída:

== Operadores Booleanos ==
Digite 0 para falso e nao 0 para verdadeiro
Entre com o primeiro valor (A): -1
Entre com o segundo valor (B): 3
A and B: 1
A or B: 1
A xor B: 0
not A: 0
-------------------------------------------------------------------------------
*/