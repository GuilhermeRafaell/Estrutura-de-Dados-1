#include <stdio.h>

int main() {
    int nota[3];
    double peso[3],m;
    char nome[1];

    printf("<< Calculo da Media >>\n");
    printf("Digite o nome do aluno: ");
    scanf("%s",nome);

    printf("Digite a nota da prova 1: ");
    scanf("%d",&nota[1]);
    printf("Digite a nota da prova 2: ");
    scanf("%d",&nota[2]);
    printf("Digite a nota da prova 3: ");
    scanf("%d",&nota[3]);

    printf("Digite o peso da prova 1: ");
    scanf("%lf",&peso[1]);
    printf("Digite o peso da prova 2: ");
    scanf("%lf",&peso[2]);
    printf("Digite o peso da prova 3: ");
    scanf("%lf",&peso[3]);

    m=((peso[1]*nota[1])+(peso[2]*nota[2])+(peso[3]*nota[3]))/(peso[1]+peso[2]+peso[3]);

    printf("A nota media do aluno %s . eh %.2lf",nome,m);
}

/*
=> Faça um algoritmo que calcule a média ponderada das notas de 3 provas. 
A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário 
entrar com as notas do aluno ele deve informar a letra inicial do nome do aluno. 
Ao final, mostrar o a letra inicial do nome do aluno juntamente com a sua média.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: M
Digite a nota da prova 1: 70
Digite a nota da prova 2: 50
Digite a nota da prova 3: 65
Digite o peso da prova 1: 1
Digite o peso da prova 2: 2
Digite o peso da prova 3: 3
A nota media do aluno M. eh 60.83
-------------------------------------------------------------------------------
*/