#include <stdio.h>

int main(){
    int i=0,valor[5],maior,menor,num;
    double media;



    printf("<< Five Values >>\n");

    for(i=0;i<5;i++){
        printf("Input #%d: ",i+1);
        scanf("%d",&valor[i]);

        if(i==0){
            maior=valor[0];
            menor=valor[0];
        }else{
            if(valor[i]>maior){
                maior=valor[i];
            }else{
            if(valor[i]<menor){
                menor=valor[i];
            }
            }
        }
    }
    
    printf("The number entered are: %d %d %d %d %d\n",valor[0],valor[1],valor[2],valor[3],valor[4]);

    printf("Max. Value: %d\n",maior);
    printf("Min. Value: %d\n",menor);

    media = (valor[0] + valor[1] + valor[2] + valor[3] + valor[4]) / 5.0;
    printf("Mean: %.1lf\n",media);

    return 0;
}



/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores

Exemplo de saída:
<< Five Values >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6
Min. Value: 0
Mean: 3.6
*/