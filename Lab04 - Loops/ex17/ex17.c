#include <stdio.h>

int main(){
    int contador=5;
    char chance;

    printf("<< Forca de uma letra soh >>\n");

    while(chance != 'q'){
        printf("Qual a letra? ");
        scanf(" %c",&chance);
        printf("Errado! Voce tem mais %d chances.\n",contador-1);
        contador--;

        if(chance == 'q'){
            printf("ACERTOU!\n");
            break;
        }
        else if(contador == 1){
            printf("Ultima chance!!!\n");
        }
        else if(contador == 0){
            printf("Acabaram suas.chances.A letra correta eh 'q'\n");
            break;
        }
    }

    
}