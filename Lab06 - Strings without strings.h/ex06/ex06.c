#include <stdio.h>

int main(){
    char nome[50],sobrenome[50],c,vetor[50]; 
    int i=0,pos=0,cont=0,aux=0,aux2=0; 

    printf("<< Nomes >>\n");
    printf("Digite o primeiro e o ultimo nome: ");
    c = getchar(); 

    while (c != '\n'){ 
    vetor[pos] = c;
    pos++;
    c = getchar();
    }

    while (i<pos)
    {
        if(vetor[i]==' '){
            aux=1;
        }
        if (aux==0){
            nome[i]=vetor[i];
            aux2++;
        }else{
            sobrenome[cont]=vetor[i];
            cont++;
        }
        i++;
    }
    
    printf("O primeiro nome eh: %s", nome);
    printf("\nO segundo nome eh: ");

    for (i=0; i < cont; i++)
    {
        printf("%c", sobrenome[i]);
    }

    return 0;
}