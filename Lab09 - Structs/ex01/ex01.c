#include <stdio.h>

struct telefone{
    int DDD[3];
    int numero[3];
};

int main(){
    struct telefone clientes; //variavel clientes do tipo struct telefone.
    
    printf("Digite o DDD: ");
    scanf("%d",&clientes.DDD[0]);
    printf("Digite o telefone: ");
    scanf("%d",&clientes.numero[0]);

    printf("Digite o DDD: ");
    scanf("%d",&clientes.DDD[1]);
    printf("Digite o telefone: ");
    scanf("%d",&clientes.numero[1]);

    printf("Digite o DDD: ");
    scanf("%d",&clientes.DDD[2]);
    printf("Digite o telefone: ");
    scanf("%d",&clientes.numero[2]);

    printf("\n");
    printf("Telefones cadastrados:\n");
    printf("%d %d\n",clientes.DDD[0],clientes.numero[0]);
    printf("%d %d\n",clientes.DDD[1],clientes.numero[1]);
    printf("%d %d\n",clientes.DDD[2],clientes.numero[2]);


    return 0;
}

/*
1) Crie uma estrutura chamada telefone, que armazena o DDD e o telefone (ilustração abaixo).  
Cadastre 3 telefones e mostre na tela os telefones cadastrados. 

Telefone**
+------------+------------+
| DDD        | Telefone   |  
+------------+------------+

-------------------------------------------------------------------------------
Exemplo de saída:
Digite o DDD: 34
Digite o telefone: 991501111
Digite o DDD: 31
Digite o telefone: 991502222
Digite o DDD: 64
Digite o telefone: 991503333

Telefones cadastrados: 
34 991501111
31 991502222
64 991503333
-------------------------------------------------------------------------------
*/