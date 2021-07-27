#include <stdio.h>
#include <math.h>

int main(){
    char opcao;
    int velocidade;

    printf("<< Conversor >>\n");
    printf("Digite uma opcao\n");
    printf("1 - para converter km/h para m/s\n");
    printf("2 - para converter de m/s para km/h\n");
    printf("q - para sair\n");
    scanf(" %c",&opcao);

    while(1){
        if(opcao == '1'){
        printf("Digite a velocidade (km/h): ");
        scanf("%d",&velocidade);
        printf("A velocidade em m/s eh %.2f\n",velocidade/3.6);

        printf("<< Conversor >>\n");
        printf("Digite uma opcao\n");
        printf("1 - para converter km/h para m/s\n");
        printf("2 - para converter de m/s para km/h\n");
        printf("q - para sair\n");
        scanf(" %c",&opcao);
    }
    else if(opcao == '2'){
        printf("Digite a velocidade (m/s): ");
        scanf("%d",&velocidade);
        printf("A velocidade em km/h eh %.2f\n",velocidade*3.6);

        printf("<< Conversor >>\n");
        printf("Digite uma opcao\n");
        printf("1 - para converter km/h para m/s\n");
        printf("2 - para converter de m/s para km/h\n");
        printf("q - para sair\n");
        scanf(" %c",&opcao);
    }
    else if(opcao == 'q'){
        break;
    }
    }
}