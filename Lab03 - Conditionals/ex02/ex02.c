#include <stdio.h>

int main(){
    int temp,res;
    char unidade;

    printf("<< Conversor de Temperatura >>\n");
    printf("Digite a temperatura: ");
    scanf("%d",&temp);
    printf("Digite a unidade: ");
    scanf(" %c",&unidade);

    if(unidade == 'f'){
        res = (temp-32)/1.8;
        printf("%d graus Fahrenheit equivale a %d graus Celsius\n",temp,res);
    }
    else if(unidade == 'c'){
        res = temp*1.8 + 32;
        printf("%d graus Celsius equivale a %d graus Fahrenheit\n",temp,res);
    }

    return 0;
}

/*

*/