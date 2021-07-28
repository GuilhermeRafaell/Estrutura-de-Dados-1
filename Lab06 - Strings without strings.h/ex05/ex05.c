#include <stdio.h>

int main(){
    char nome1[6];
    char nome2[6];
    int pos=0,pos1=0,aux=0,i;
    char c,c1;
    char maior=0;

    printf("<< Compara Nomes >>\n");
    printf("Digite o 1o nome: ");
    c = getchar();

    while(c != '\n'){
        nome1[pos] = c;
        pos++;
        c = getchar();
    }

    printf("Digite o 2o nome: ");
    c1 = getchar();
    
    while(c1 != '\n'){
        nome2[pos1] = c1;
        pos1++;
        c1 = getchar();
    }

    if(pos>pos1){
        maior=pos;
    }else{
        maior=pos1;
    }

    
    for (int i = 0; i < maior; i++)
    {
        if(nome1[i]==nome2[i]||nome1[i]-32==nome2[i]||nome1[i]-32==nome2[i]-32||nome1[i]==nome1[i]-32){

        }else{  
            aux=1;
        }
    }
    if (aux==0)
    printf("Os nomes digitados sao iguais\n");
    else
    printf("Os nomes digitados sao diferentes\n");
    
}