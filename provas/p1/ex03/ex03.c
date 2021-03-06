#include <stdio.h>
#include <stdlib.h>

// Função: Cálculo do lucro
// Crie um função que calcula qual foi o lucro (ou prejuízo) de uma venda
// A função recebe como entrada o preço de compra e o preço de venda
// Ela calcula e retorna o porcentual de lucro ou prejuízo obtido
//
// A função deve retornar um valor inteiro de acordo com a classificação listada na tabela abaixo.
// Valores inválidos correspondem a números negativos e zeros
// Todos os comandos de entrada e saída devem estar no programa principal
// Todos os cálculos devem ser feitos na função.

/*
+-------------------+-----------------------------------------------+----------------+
| Retorno da Função | Porcentual de lucro                           | Classificação  |
+-------------------+-----------------------------------------------+----------------+
| -1                | -                                             | Valor invalido |
+-------------------+-----------------------------------------------+----------------+
| 1                 | abaixo ou igual 0%                            | Prejuízo       |
+-------------------+-----------------------------------------------+----------------+
| 2                 | acima de 0% e menor ou igual a 20%            | Lucro pequeno  |
+-------------------+-----------------------------------------------+----------------+
| 3                 | acima de 20% e menor ou igual a 40%           | Lucro bom      |
+-------------------+-----------------------------------------------+----------------+
| 4                 | acima de 40%                                  | Lucro alto     |
+-------------------+-----------------------------------------------+----------------+

*/
// check:<<<erro: e3.1b: A função deve calcular e retornar por referência a porcentagem>>>>
// check:<<<erro: e3.2: Faltou testar os valores inválidos dentro da função / teste errado / faltou alguns testes>>>>
float calc_lucro(float pcompra, float pvenda){
    float lucro,porcentual;

    lucro = pcompra - pvenda;

    porcentual = (lucro/pcompra)*100;

    if(lucro <= 0){
        return -1;// check:<<<erro: prejuízo retorna 1 e não -1>>>>
    }
    else if(porcentual <= 0){
        return 1;
    }
    else if(porcentual > 0 && porcentual <= 20){
        return 2;
    }
    else if(porcentual > 20 && porcentual <= 40){
        return 3;
    }
    else if(porcentual > 40){
        return 4;
    }
    // check:<<<comentário: e3.4: o último teste é desnecessário E/OU alguns testes no IF são desnecessários>>>>    
}

int main(){
    float pcompra,pvenda,lucro,porcentual;
    int aux;
   // Ex03: utilizando a função de cálculo de lucro, leia o preço de compra e venda
   // e mostre o percentual de lucro ou prejuízo e a classificação de acordo com
   // a tabela acima. 
    printf("Digite o preco de compra: ");
    scanf("%f",&pcompra);
    printf("Digite o preco de venda: ");
    scanf("%f",&pvenda);

    lucro = pcompra - pvenda;

    porcentual = (lucro/pcompra)*100;

    aux = calc_lucro(pcompra,pvenda);

// check:<<<erro: e3.6: e3.6: Chamada de função com erros (parâmetro de entrada e/ou saída) ou faltando a passagem por referência>>>>


    printf("\n");
    if(aux == -1){
        printf("Valor Invalido, Nenhum Lucro.");
    }
    else if(aux == 1){
        printf("Prejuizo de %.0f%%",porcentual);
    }
    else if(aux == 2){
        printf("Lucro pequeno de %.0f%%",porcentual);
    }
    else if(aux == 3){
        printf("Lucro bom de %.0f%%",porcentual);
    }
    else if(aux == 4){
        printf("Lucro alto de %.0f%%",porcentual);
    }

   // exemplo de saída:
   // Preço de compra: 10; Preco de venda:11; Lucro Pequeno de 10%
   // Preço de compra: 10; Preco de venda: 9; Prejuízo de 10%
  
    return 0;
}