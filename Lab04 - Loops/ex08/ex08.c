#include <stdio.h>

int main(){
    int i=10;
    printf("<< Contagem regressiva >>\n");
    printf("Qual eh o numero inicial? ");
    scanf("%d",&i);

    if(i>0){
        do
        {
            printf("%d.. ",i);
            i--;
        }while(i>=0);
    }

    if(i<0){
        do
        {
            printf("%d.. ",i);
            i++;
        }while(i<=0);
    }
    
    printf("FIM!");
    return 0;
}