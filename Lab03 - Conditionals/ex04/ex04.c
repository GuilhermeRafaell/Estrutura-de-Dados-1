#include <stdio.h>

int main(){
    float nota1,nota2,nota3;
    char nome1,nome2,nome3;

    printf("<< Notas da Turma >>\n");
    
    
    printf("Entre com o nome do aluno #1: ");
    scanf(" %c",&nome1);
    printf("Entre com a nota do aluno #1: ");
    scanf("%f",&nota1);
    printf("Entre com o nome do aluno #2: ");
    scanf(" %c",&nome2);
    printf("Entre com a nota do aluno #2: ");
    scanf("%f",&nota2);
    printf("Entre com o nome do aluno #3: ");
    scanf(" %c",&nome3);
    printf("Entre com a nota do aluno #3: ");
    scanf("%f",&nota3);
    printf("\n");
    if(nota1 > nota2 && nota1 > nota3){
        if(nota2>nota3){
            printf("%c. tem a maior nota (%.1f) e %c. a menor (%.1f)",nome1,nota1,nome3,nota3);
        }else if(nota3>nota2){
            printf("%c. tem a maior nota (%.1f) e %c. a menor (%.1f)",nome1,nota1,nome2,nota2);
        }
    }
    else if(nota2 > nota1 && nota2 > nota3){
        if(nota1>nota3){
            printf("%c. tem a maior nota (%.1f) e %c. a menor (%.1f)",nome2,nota2,nome3,nota3);
        }else if(nota3>nota1){
            printf("%c. tem a maior nota (%.1f) e %c. a menor (%.1f)",nome2,nota2,nome1,nota1);
        }
    }
    else if(nota3 > nota1 && nota3 > nota2){
        if(nota1>nota2){
            printf("%c. tem a maior nota (%.1f) e %c. a menor (%.1f)",nome3,nota3,nome2,nota2);
        }else if(nota2>nota1){
            printf("%c. tem a maior nota (%.1f) e %c. a menor (%.1f)",nome3,nota3,nome1,nota1);
        }
    }
    

    return 0;
} 