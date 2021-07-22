#include <stdio.h>

int main(){
int V[8], iguais[8], n = 1, valores = 0;

    printf("<< Valores iguais  >>\n");

    for (int i = 0; i < 8; i++)
    {
        printf("Entre com o numero %d: ", i + 1);
        scanf("%d", &V[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (V[i] == V[j] && i != j)
            {
                for (int k = 0; k < 8; k++)
                {
                    if (V[i] == iguais[k])
                    {
                        n = 0;
                    }
                }
                if (n == 1)
                {
                    iguais[valores] = V[i];
                    valores++;
                }
            }
            n = 1;
        }
    }

    printf("Valores repetidos: ");

    for (int i = 0; i < valores; i++)
    {
        printf(" %d", iguais[i]);
        if (i < valores - 1)
        {
            printf(",");
        }
    }

    return 0;
}

/*
Faça um programa que leia um vetor de 8 posições e verifique se existem 
valores iguais e os escreva (cada número repetido deve aparecer somente 
uma vez na resposta)

Exemplo de saída:
<< Valores iguais >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 5
Entre com o numero 5: -3 
Entre com o numero 6: -3
Entre com o numero 7: -3
Entre com o numero 8: 6


Valores repetidos: 5, 6, -3
*/