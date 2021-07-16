#include <stdio.h>

int main() {
    int n;

    printf("<< Sucessor e Antecessor >>\n");
    printf("Dite um numero: ");
    scanf("%d",&n);
    printf("\n");
    printf("Antecessor: %d",n-1);
    printf("Numero: %d",n);
    printf("Sucessor: %d",n+1);

}

/*
=> Ler um número e retorne seu antecessor e seu sucessor.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Sucessor e Antecessor >>
Digite um numero: 2

Antecessor: 1
Numero: 2
Sucessor: 3
-------------------------------------------------------------------------------
*/