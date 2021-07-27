#include <stdio.h>
#include <math.h>

int main(){
    double num=2,num2=0;

    for(int i=0;i<7;i++){
        num2 = pow(2,num);
        printf("Com %.0f bits eh possivel enderecar %.0f posicoes de memoria.\n",num,num2);
        num = num*2;
    }
    
}