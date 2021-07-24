#include <stdio.h>

int main(){
    char nome;
    int media,n1,n2,n3;

    printf("<< Calculo da Media >>\n");
    printf("Digite a inical do nome do aluno: ");
    scanf(" %c",&nome);
    printf("Digite a nota da prova 1: ");
    scanf("%d",&n1);
    printf("Digite a nota da prova 2: ");
    scanf("%d",&n2);
    printf("Digite a nota da prova 3: ");
    scanf("%d",&n3);

    media = ((n1*1)+(n2*1)+(n3*3))/5;

    if(media >= 60){
        printf("A nota media do aluno %c. eh %d => APROVADO!",nome,media);
    }else{
        printf("A nota media do aluno %c. eh %d => REPROVADO!",nome,media);
    }


    return 0;
}

/*

*/