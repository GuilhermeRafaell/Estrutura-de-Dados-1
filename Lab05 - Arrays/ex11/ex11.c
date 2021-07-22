#include <stdio.h>

int main(){
    int v[5], v1[5], v2[5];
    int a=0,b=0;

    printf("<< Pares e Impares  >>\n");

    for (int i = 0; i < 5; i++)
    {
        printf ("Digite o valor %d: ", i+1);
        scanf ("%d",&v[i]);

        if (v[i]%2 == 0)
        {
            v2[a] = v[i];
            a++;
        }else
        {
            v1[b] = v[i];
            b++;
        }
        
    }
    
    printf ("Impares: ");

    for (int j = 0; j < b; j++)
    {
        printf ("%d", v1[j]);
        if (j < b-1)
        {
            printf (", ");
        }
        
    }

    printf ("\nPares: ");

    for (int k = 0; k < a; k++)
    {
        printf ("%d", v2[k]);
        if (k < a-1)
        {
            printf (", ");
        }

    }

    return 0;
}

/*
Leia 5 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
Copie os valores ímpares de v para v1, e os valores pares de v para v2.
Note que cada um dos vetores v1 e v2 tem no máximo 5 elementos, mas nem todos os elementos são utilizados.
No final escreva os elementos UTILIZADOS de v1 e v2.  

Exemplo de saída:
<< Pares e Ímpares >>
Digite o valor 1: 51
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60

Ímpares: 51
Pares: 60, 70, 80, 60
*/