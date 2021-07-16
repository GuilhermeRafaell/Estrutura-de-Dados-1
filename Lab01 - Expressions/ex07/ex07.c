#include <stdio.h>

int main() {
    int d,valb;
    double vall,iss,ir;

    printf("<< Pagamento encanador >>\n");
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d",&d);

    valb=d*30;
    ir=valb*0.08;
    iss=valb*0.04;
    vall=valb-(iss+ir);

    printf("Valor bruto R$: %d\n",valb);
    printf("Valor liquido R$: %.0lf\n",vall);
    printf("ISS R$: %.0lf\n",iss);
    printf("IR R$: %.0lf\n",ir);
}

/*
=> Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador 
e imprima o valor bruto, o imposto, e a quantia líquida que deverá ser paga ao encanador, sabendo-se que são descontados 8% para 
imposto de renda e 4% de ISS. 

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 792
ISS R$: 36
IR R$: 72
-------------------------------------------------------------------------------
*/