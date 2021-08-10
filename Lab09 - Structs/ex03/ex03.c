#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct endereco{
    char rua[20];
    char numero[20];
    char complemento[20];
    char cidade[20];
    char estado[2];
    char cep[8];
};

int main(){
    struct endereco um[3];

    for (int i = 0; i < 3; i++){
        printf("\nDigite o nome da rua: ");
        fgets(um[i].rua,30,stdin);

        printf("Digite o numero da casa: ");
        fgets(um[i].numero,30,stdin);

        printf("Digite o complemento da casa: ");
        fgets(um[i].complemento,30,stdin);

        printf("Digite o nome da cidade: ");
        fgets(um[i].cidade,30,stdin);

        printf("Digite o estado: ");
        fgets(um[i].estado,30,stdin);

        printf("Digite o CEP: ");
        fgets(um[i].cep,30,stdin);
    }

    printf("Enderecos cadastrados que sao de 'MG': ");
    if(strcmp(um[0].estado,"MG")==0){
            printf("Rua %s",um[0].rua);
            printf("numero %s",um[0].numero);
            printf("complemento %s",um[0].complemento);
            printf("cidade %s",um[0].cidade);
            printf("estado %s",um[0].estado);
            printf("cep %s",um[0].cep);
        }
    else if(strcmp(um[1].estado,"MG")==0){
            printf("Rua %s",um[1].rua);
            printf("numero %s",um[1].numero);
            printf("complemento %s",um[1].complemento);
            printf("cidade %s",um[1].cidade);
            printf("estado %s",um[1].estado);
            printf("cep %s",um[1].cep);
        }
    else if(strcmp(um[2].estado,"MG")==0){
            printf("Rua %s",um[2].rua);
            printf("numero %s",um[2].numero);
            printf("complemento %s",um[2].complemento);
            printf("cidade %s",um[2].cidade);
            printf("estado %s",um[2].estado);
            printf("cep %s",um[2].cep);
        }



    return 0;
}

/*
1) Crie uma estrutura chamada endereco, que armazena Rua, Número, Complemento,
Cidade, Estado e CEP (ilustração abaixo).  
Cadastre 3 endereços. Mostre ao final, todos os dados dos endereços cadastrados que são do estado “MG”

Endereco*
+------------+------------+---------------+
| Rua        | Número     |  Complemento  |    
+------------+------------+---------------+
| Cidade     | Estado     |     CEP       | 
+------------+------------+---------------+


-------------------------------------------------------------------------------
Exemplo de saída:
Rua: Joao
Numero: 32
Complemento: casa A
Cidade: Uberlandia
Estado: MG
CEP: 38400034


Rua: Almeida
Numero: 43
Complemento: Sem
Cidade: Araguari
Estado: MG
CEP: 38400045


Rua: Coronel Pedro
Numero: 25
Complemento: apto 40
Cidade: Caldas Novas
Estado: GO
CEP: 75780023


Enderecos cadastrados que sao de "MG":
Joao, 32. casa A. Uberlandia-MG, 38400034.
Almeida, 43. Sem. Araguari-MG, 38400045.
-------------------------------------------------------------------------------
*/