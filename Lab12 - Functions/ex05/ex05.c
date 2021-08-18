#include <stdio.h>
#include <math.h>

QuadradoPerfeito(int num){
    int a;
    a = sqrt(num);

    if(pow(a,2) == num){
        printf("O numero %d eh um quadrado perfeito\n",num);
    }else{
        printf("O numero %d nao eh um quadrado perfeito\n",num);       
    }
}
int main(){
    int n;
    printf("Digite o valor de n: ");
    scanf("%d",&n);
    QuadradoPerfeito(n);

    return 0;
}

/*
=> Faça uma função para verificar se um número 
é um quadrado perfeito (retorne Verdadeiro caso seja).   

Ex: QuadradoPerfeito(4) retorna verdadeiro; 
    QuadradoPerfeito(10) retorna falso; 

obs: Pode-se retornar os valores 0 (para verdadeiro) e 1 (para falso).

No programa principal, solicite ao usuário o valor de n.

-------------------------------------------------------------------------------
Exemplo de Saída 1:

Digite o valor de n: 4
O numero 4 eh um quadrado perfeito
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
Exemplo de Saída 2:

Digite o valor de n: 10
O numero 10 não eh um quadrado perfeito
-------------------------------------------------------------------------------
*/