#include <stdio.h>

int main(){
    int i=10;
    printf("<< Contagem regressiva >>\n");
    printf("Qual eh o numero inicial? ");
    scanf("%d",&i);

    if(i>0){
        for(i;i>=0;i--){
            printf("%d.. ",i);
        }
    }

    if(i<0){
        for(i;i<=0;i++){
            printf("%d.. ",i);
        }
    }
    
    printf("FIM!");
    return 0;
}