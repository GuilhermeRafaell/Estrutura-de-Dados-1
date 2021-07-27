#include <stdio.h>
#include <math.h>

int main(){
    int soma=0,n,bit[10],dec;
    printf("<< Conversor binario-decimal >>\n");
    printf("Entre com o numero de bits: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Digite o bit #%d: ",i+1);
        scanf("%d",&bit[i]);
    }

    for(int i=0;i<n;i++){
        dec = bit[i]*pow(2,i+1);
        soma = soma + dec;
    }
    
    printf("O numero binario ");
    for(int i=0;i<n;i++){
        printf("%d",bit[i]);
    }
    printf(" em decimal eh %d",dec);

}