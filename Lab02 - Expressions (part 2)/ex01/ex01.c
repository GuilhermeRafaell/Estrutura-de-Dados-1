#include <stdio.h>

int main(){
    double m,n1,n2;
    

    printf("<< Calculo da Media >>\n");
    printf("Digite a nota da prova 1: ");
    scanf("%lf",&n1);
    printf("Digite a nota da prova 2: ");
    scanf("%lf",&n2);

    m=(n1+n2)/2.0;

    printf("A nota media eh %.0lf\n",m);

//O algoritmo tambem abrange notas com valores de reais 
}

/*
=> Faça um algoritmo que calcula a média das notas de 2 provas.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite a nota da prova 1: 80
Digite a nota da prova 2: 90
A nota media eh 85
-------------------------------------------------------------------------------
*/