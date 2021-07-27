#include <stdio.h>

int main(){
    int i=10;
    printf("<< Contagem regressiva >>\n");
    printf("Qual eh o numero inicial? ");
    scanf("%d",&i);

    if(i>0){
        while(i>=0){
            printf("%d.. ",i);
            i--;
    }
    }

    if(i<0){
        while(i<=0){
            printf("%d.. ",i);
            i++;
    }
    }
    
    printf("FIM!");
    return 0;
}