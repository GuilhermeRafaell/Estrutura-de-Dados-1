#include <stdio.h>

int main() {
    char nome[1];
    int n1,n2;
    double m;

    printf("<< Calculo da Media >>\n");
    printf("Digite o nome do aluno: ");
    scanf("%s",nome);
    printf("Digite a nota da prova 1: ");
    scanf("%d",&n1);
    printf("Digite a nota da prova 2: ");
    scanf("%d",&n2);

    m=(n1+n2)/2.0;

    printf("A nota media do aluno %s . eh %.1lf\n",nome,m);
}

/*
=> Altere o algoritmo anterior para que, antes de o usuário entrar com as 
notas do aluno ele entre com a inicial do nome do aluno. Ao final, 
mostrar a inicial do nome do aluno juntamente com a sua média.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: C
Digite a nota da prova 1: 70
Digite a nota da prova 2: 85
A nota media do aluno C. eh 77.5
-------------------------------------------------------------------------------
*/