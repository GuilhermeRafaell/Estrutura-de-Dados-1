#include <stdio.h>

int main() {
    int m,nota[3];

    printf("<< Media Aritmetica >>\n");
    
    for(int i=0; i<4 ;i++){
        printf("Digite a %da nota: ",i+1);
        scanf("%d",&nota[i]);
    }

    m = (nota[0]+nota[1]+nota[2]+nota[3])/4;

    printf("==Notas==\n");
    printf("Nota 1: %d; Nota 2: %d; Nota 3: %d; Nota 4: %d\n",nota[0],nota[1],nota[2],nota[3]);
    printf("Media: %d",m);
}

/*
=> Ler quatro notas e mostrar as notas e a média aritmética obtida.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Media Aritmetica >>
Digite a 1a nota: 30
Digite a 2a nota: 40
Digite a 3a nota: 60
Digite a 4a nota: 30
===Notas===
Nota 1: 30; Nota 2: 40; Nota 3: 60; Nota 4: 30
Media: 40
-------------------------------------------------------------------------------
*/