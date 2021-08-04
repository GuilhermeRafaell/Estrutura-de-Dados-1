#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char nome[] = "Jose Algusto";
    char *p;
    p = &nome[0];

    printf("<< Pointers >>\n");
    for(int i=0;i<strlen(nome);i++){
        printf("%c",*p);
        p = p + 1;
    }
    return 0;
}