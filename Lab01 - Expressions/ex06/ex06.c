#include <stdio.h>

int main() {
    int t=780000;
    printf("<< Loteria >>\n");

    printf("Valor total do premio: %d\n",t);
    printf("Primeiro vencedor: %.0lf\n",0.46*t);
    printf("Segundo vencedor: %.0lf\n",0.32*t);
    printf("Terceiro vencedor: %.0lf\n",0.22*t);
}

/*
=> A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que da quantia total: 
    O primeiro ganhador receberá 46%;
    O segundo receberá 32%;
    O terceiro receberá o restante;(22%)
Calcule e imprima a quantia ganha por cada um dos ganhadores.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Loteria >>
Valor total do premio: 780000
Primeiro vencedor: 358800
Segundo vencedor: 249600
Terceiro vencedor: 171600
-------------------------------------------------------------------------------
*/