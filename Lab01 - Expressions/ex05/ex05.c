#include <stdio.h>

int main() {
    int s;
    double reajuste;

    printf("<< Aumento Salarial >>\n");
    printf("Digite o valor do salario R$: ");
    scanf("%d",&s);

    reajuste = 1.25*s;

    printf("Apos 25 %% de aumento o salario fica em R$ %.2lf",reajuste);
}

/*
=> Ler quatro notas e mostrar as notas e a média aritmética obtida.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Aumento Salarial >>
Digite o valor do salario R$: 4000
Apos 25% de aumento o salario fica em R$ 5000.00
-------------------------------------------------------------------------------
*/