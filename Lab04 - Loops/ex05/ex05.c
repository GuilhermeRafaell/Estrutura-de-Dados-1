#include <stdio.h>

int main(){
    int i;
    printf("<< Contagem regressiva >>\n");
    printf("Qual eh o numero inicial? ");
    scanf("%d",&i);
    do
    {
        printf("%d.. ",i);
        i--;
    }while(i>=0);
    
    printf("FIM!");
    return 0;
}