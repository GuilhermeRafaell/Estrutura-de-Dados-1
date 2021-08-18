#include <stdio.h>

int main(){
    int a,b,c;

    printf("Digite o numero A: ");
    scanf("%d",&a);
    printf("Digite o numero B: ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("O numero A eh: %d\n",a);
    printf("O numero B eh: %d",b);
    return 0;
}

/*
=> Faça um procedimento “Troque”, que recebe duas variáveis reais A e B
e troca o valor delas (i.e., A recebe o valor de B e B recebe o valor de A).
Mostre no programa principal o resultado da troca. 


No programa principal, solicite ao usuário o número A e o número B.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o número A: 2
Digite o número B: 5
O número A eh: 5
O número B eh: 2
-------------------------------------------------------------------------------
*/