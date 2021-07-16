#include <stdio.h>

int main() {
int d,valb;
double vall,iss,ir;

printf("<< Pagamento encanador >>\n");
printf("Digite o numero de dias trabalhados: ");
scanf("%d",&d);
    
valb=d*30;
ir=(valb-valb*0.04)*0.08;
iss=valb*0.04;
vall=valb-(iss+ir);

printf("Valor bruto R$: %d\n",valb);
printf("Valor liquido R$: %.2lf\n",vall);
printf("ISS R$: %.0lf\n",iss);
printf("IR R$: %.2lf\n",ir);
}

/*
=> Um contador percebeu que o cálculo de IR do encanador estava errado, pois estava sendo calculado sobre o valor bruto que ele recebeu. 
Refaça o programa anterior, considerando que o IR é sobre o valor bruto após o desconto do ISS.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 794.88
ISS R$: 36
IR R$: 68.12
-------------------------------------------------------------------------------
*/