#include <stdio.h>

int main(void) {
    char nome[10] = "0123456789";  
    nome[0] = 'B';  
    nome[1] = 'r';  
    nome[2] = 'a';  
    nome[3] = 's';  
    nome[4] = 'i';  
    nome[5] = 'l';  
    int i,tamanho = 6;  
    
    for (i=0; i < tamanho; i++){    
        printf("%c",nome[i]);  
    }   
    
    //É Preciso definir o limite da string ('\0')
    nome[6] = '\0';

    printf("\n%s\n",nome);
    
    return 0;
}
