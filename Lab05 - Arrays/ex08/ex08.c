#include <stdio.h>
#include <math.h>

int main(){
    int soma,valor[5];
    double media,desvioPadrao = 0.0;

    printf("<< Media e desvio-padrao >>\n");

    for(int i=0;i<5;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&valor[i]);
    }

    media = (valor[0]+valor[1]+valor[2]+valor[3]+valor[4])/5.0;
    desvioPadrao = sqrt( (pow(valor[0]-media,2) + pow(valor[1]-media,2) + pow(valor[2]-media,2) + pow(valor[3]-media,2) + pow(valor[4]-media,2))/ 4.0 );

    printf("A media eh %.0lf e o desvio-padrao eh %.2lf\n",media,desvioPadrao);

    return 0;
}

/*
Calcular a média e o desvio padrão amostral de 5 números informados pelo usuário.
obs: desvio-padrão (amostral, normalizado por N-1)

Exemplo de saída:
<< Media e desvio-padrao >>
Digite o valor 1: 50
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60
A media eh 64 e o desvio-padrao eh 11.40
*/
