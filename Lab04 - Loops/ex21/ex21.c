#include <stdio.h>
/*
Comeca a estourar valor Apos 13 pois o int nao suporta o numero maior q 2 bilhoes ,
mesmo que utilizado o unsigned int nao iria suportar.  
*/
int main(){
    int aux,n=1,fat=1;

    printf("<< Fatorial >>\n");

    for(int i=1;i<=10;i++){
        while(n<=10){
            n++;
            printf("%d! = %d\n",i,n*i);
        }
    }
}