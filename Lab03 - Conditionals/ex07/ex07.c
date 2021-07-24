#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,A,B,C;

    printf("<< Verifica Triangulo >>\n");
    printf("Digite o valor dos tres lados do triangulo: ");
    scanf("%d %d %d",&a,&b,&c);

    A = pow(a,2);
    B = pow(b,2);
    C = pow(c,2);

    if(A == B+C){
        printf("Corresponde a um Triangulo Retangulo.\n");
    }
    else if(A > B+C){
        printf("Correspomde a um Triangulo Obtusangulo.\n");
    }
    else if(A < B+C){
        printf("Corresponde a um Triangulo Acutangulo.\n");
    }
    else if(a == b+c || b == c+a){
        printf("Erro! Nenhum triangulo eh formado.\n");
    }
    else if(a<0 || b<0){
        printf("Erro! Nao existe valor de lado negativo.\n");
    }
    else if(c<0 || b<0){
        printf("Erro! Nao existe valor de lado negativo.\n");
    }
    
    return 0;
}