#include <stdio.h>

int main(){
    int venda;
    double comissao;
    printf("<< Imprime nota da Comissao >>\n");
    printf("Digite o valor de venda: ");
    scanf("%d",&venda);

    if(venda>=100000){
        comissao = 700 + 0.16*venda;
        printf("Valor de Comissao: %.2lf R$\n",comissao);
    }
    else if(venda<100000 && venda>=80000){
        comissao = 650 + 0.14*venda;
        printf("Valor de Comissao: %.2lf R$\n",comissao);
    }
    else if(venda<80000 && venda>=60000){
        comissao = 600 + 0.14*venda;
        printf("Valor de Comissao: %.2lf R$\n",comissao);
    }
    else if(venda<60000 && venda>=20000){
        comissao = 550 + 0.14*venda;
        printf("Valor de Comissao: %.2lf R$\n",comissao);
    }
    else if(venda<40000 & venda>=20000){
        comissao = 500 + 0.14*venda;
        printf("Valor de Comissao: %.2lf R$\n",comissao);
    }
    else if(venda<20000){
        comissao = 400 + 0.14*venda;
        printf("Valor de Comissao: %.2lf R$\n",comissao);
    }
        
    return 0;
}