#include <stdio.h>

int main() 
{
  int i,j,n,mult,cont;
          
  printf("<< Multiplos >>\n");
  printf("Entre com o valor de n: ");
  scanf("%d", &n);
  printf("Entre com o valor de i: ");
  scanf("%d", &i);
  printf("Entre com o valor de j: ");
  scanf("%d", &j);
  
  mult = 0;
  cont = 0; 
  
  printf("Os multiplos de i ou j sao: ", j);
  while (cont<n)
    {
    if(mult%i == 0 || mult%j == 0){
	    printf(" %d", mult);
        cont = cont + 1;;
	    }
    mult = mult + 1; 
    }
   
}