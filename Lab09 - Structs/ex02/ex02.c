#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data{
    int dia[3];
    char mes[3][10];
    int ano[3];
};

int main(){
    struct data Data;
    int maior;

    for(int i=0; i<3; i++){
        printf("Digite o dia: ");
        scanf("%d",&Data.dia[i]);
        printf("Digite o mes: ");
        scanf("%s",Data.mes[i]);
        printf("Digite o ano: ");
        scanf("%d",&Data.ano[i]);
        printf("\n");
    }
    printf("\n\n");
    printf("Datas cadastradas:\n");
    for(int i=0; i<3; i++){
        printf("Dia %d de %s de %d.\n",Data.dia[i],Data.mes[i],Data.ano[i]);
    }
    maior = Data.ano[0];

    if(maior < Data.ano[1]){
        maior = Data.ano[1];
    }if(maior < Data.ano[2]){
        maior = Data.ano[2];
    }

    printf("\n");
    printf("%d foi o maior ano cadastrado.",maior);
    

    return 0;
}

/*
1) Crie uma estrutura chamada data, que armazena o dia, mês e o ano (ilustração abaixo).  
Cadastre 3 datas, mostre as datas e o maior ano cadastrado. 

Data***
+------------+------------+---------------+
| Dia        | Mês        |   Ano         |    
+------------+------------+---------------+

-------------------------------------------------------------------------------
Exemplo de saída:
Digite o dia: 2
Digite o mes: Janeiro
Digite o ano: 2015

Digite o dia: 15
Digite o mes: Maio
Digite o ano: 2018

Digite o dia: 21
Digite o mes: Dezembro
Digite o ano: 2020


Datas cadastradas: 
Dia 2 de Janeiro de 2015
Dia 15 de Maio de 2018
Dia 21 de Dezembro de 2020

2020 foi o maior ano cadastrado.
-------------------------------------------------------------------------------
*/