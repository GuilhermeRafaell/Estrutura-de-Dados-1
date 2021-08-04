#include <stdio.h>

int main(){
    int a;
    double b;

    void *p;
    
    printf("<< Pointers >>\n");
    
    p = &a;
    printf("Digite o valor de a: ");
    scanf("%d",p);
    printf("Valor de a: %d\n",*(int *)p);

    p = &b;
    printf("Digite o valor de b: ");
    scanf("%d",p);
    printf("Valor de b: %d\n",*(double *)p);

    return 0;
}