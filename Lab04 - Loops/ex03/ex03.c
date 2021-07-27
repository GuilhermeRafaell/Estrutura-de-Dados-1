#include <stdio.h>

int main(){
    
    printf("<< Contagem regressiva >>\n");

    for(int i=10;i>=0;i--){
        printf("%d.. ",i);
    }
    printf("FIM!");
    return 0;
}