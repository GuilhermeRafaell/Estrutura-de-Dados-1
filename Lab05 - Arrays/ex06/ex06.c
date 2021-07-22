#include <stdio.h>

int main(){
    int i=0,valor[5],maior,menor,num;
    int indexMaior,indexMenor;
    double media;

    printf("<< Five Values with index >>\n");

    for(i=0;i<5;i++){
        printf("Input #%d: ",i+1);
        scanf("%d",&valor[i]);

        if(i==0){
            maior=valor[0];
            menor=valor[0];
        }else{
            if(valor[i]>maior){
                maior=valor[i];
                indexMaior=i;
            }else{
            if(valor[i]<menor){
                menor=valor[i];
                indexMenor=i;
            }
            }
        }
    }
    
    printf("The number entered are: %d %d %d %d %d\n",valor[0],valor[1],valor[2],valor[3],valor[4]);

    printf("Max. Value: %d, index %d of the array.\n",maior,indexMaior);
    printf("Min. Value: %d, index %d of the array.\n",menor,indexMenor);

    media = (valor[0] + valor[1] + valor[2] + valor[3] + valor[4]) / 5.0;
    printf("Mean: %.1lf\n",media);

    return 0;
}

/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores
Mostrar o índice (index) do vetor associado ao maior número e ao menor número 

Exemplo de saída:
<< Five Values with index >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6, index 1 of the array
Min. Value: 0, index 3 of the array
Mean: 3.6
*/