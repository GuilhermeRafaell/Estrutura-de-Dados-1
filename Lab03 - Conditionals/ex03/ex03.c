#include <stdio.h>

int main(){
//1-MG 7%; 2-SP 12%; 3-RJ 15%; 4-MS 8%
    int estado;
    double valor;

    printf("<< Valor do produto com imposto >>\n");
    printf("Digite o valor do produto R$: ");
    scanf("%lf",&valor);
    printf("Digite a federacao: ");
    scanf("%d",&estado);

    if(estado == 1){
        printf("Valor final com imposto R$: %.2lf",valor*1.07);
    }
    else if(estado == 2){
        printf("Valor final com imposto R$: %.2lf",valor*1.12);
    }
    else if(estado == 3){
        printf("Valor final com imposto R$: %.2lf",valor*1.15);
    }
    else if(estado == 4){
        printf("Valor final com imposto R$: %.2lf",valor*1.08);
    }
    return 0;
}

/*

*/