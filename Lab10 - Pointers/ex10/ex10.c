#include <stdio.h>
#include <stdlib.h>


int main(){
    double vet[]={1,2,4,8,16,32,64,128,256,512};
    printf("<< Pointers >>\n");

    printf("\nElementos do vetor: ");
    for(int i=9;i>0;i--){
        printf("%.1lf ",*(vet+i));  
    }
    return 0;
}