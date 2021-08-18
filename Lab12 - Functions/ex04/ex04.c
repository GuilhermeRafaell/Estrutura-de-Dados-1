#include <stdio.h>
#include <stdlib.h>

Elevado(int a, int b){
    int aux=1,c;

    c=b;

    while(b>0){
        aux = aux*a;
        b--;
    }
    printf("O valor de %d elevado a %d eh %d\n",a,c,aux);

    return 0;
}

int main(){
    int x,n;

    printf("Digite o valor de x: ");
    scanf("%d",&x);
    printf("Digite o valor de n: ");
    scanf("%d",&n);

    Elevado(x,n);

    return 0;
}

/*
=> Faça uma função para calcular xn. Não utilizar o operador pow (nem ^ - que não existe em C).
No programa principal permita ao usuário informar o valor de x e de n (inteiro). 
Lembre que n pode assumir valor negativo.

Ex: Elevado(2,4) tem como saída 16; 
    

No programa principal, solicite ao usuário o valor de x e o valor de n.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x: 2
Digite o valor de n: 4
O valor de 2 elevado a 4 eh 16
-------------------------------------------------------------------------------
*/