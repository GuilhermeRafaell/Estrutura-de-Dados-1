#include <stdio.h>

int main(){
    int val[5] = {2,4,5,8,10};
    int *pval;
    printf("<< Pointers >>\n");

    pval = &val[0];//Para comecar no val[0].
    printf("\nNovos valores para val: ");
    for(int i=0;i<5;i++){
        *pval -= 1;
        printf("%d ",*pval);
        pval++; 
    }

    return 0;
}