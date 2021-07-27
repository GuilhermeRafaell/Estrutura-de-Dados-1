#include <stdio.h>

int main(){
    int i;
    printf("<< Contagem regressiva >>\n");
    printf("Qual eh o numero inicial? ");
    scanf("%d",&i);
    while(i>=0){
        printf("%d.. ",i);
        i--;
    }
    printf("FIM!");
    return 0;
}