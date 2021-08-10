#include <stdio.h>
#include <string.h>

struct telefone{
    int ddd;
    char telefone[15];
};

struct data{
    int dia,mes,ano;
};

struct endereco{
    char rua[20],numero[20],complemento[20],cidade[20],estado[3],cep[15];
};

struct cadastro{
    char nome[30],cpf[20],sexo[15],estadocivil[15],salario[60],identidade[20];
    struct telefone celular,telefone_residencial;
    struct data data_nascimento,data_ingresso;
    struct endereco endereco_residencial,endereco_comercial;
};

int main(){
    struct cadastro pessoa[5];
    int i = 1;
    char opc[2];

{
    strcpy(pessoa[0].nome,"Guilherme Rafael Cerqueira Dias.");
    strcpy(pessoa[0].cpf,"000000-20");
    strcpy(pessoa[0].sexo,"Masculino");
    strcpy(pessoa[0].estadocivil,"Solteiro");
    strcpy(pessoa[0].salario,"R$3000.50");
    strcpy(pessoa[0].identidade,"Indefinido");
    pessoa[0].celular.ddd=16;
    strcpy(pessoa[0].celular.telefone,"010101010");
    pessoa[0].telefone_residencial.ddd=35;
    strcpy(pessoa[0].telefone_residencial.telefone,"984115833");
    pessoa[0].data_nascimento.dia=28;
    pessoa[0].data_nascimento.mes=06;
    pessoa[0].data_nascimento.ano=2000;
    pessoa[0].data_ingresso.dia=01;
    pessoa[0].data_ingresso.mes=02;
    pessoa[0].data_ingresso.ano=2020;
    strcpy(pessoa[0].endereco_residencial.rua,"Iraja");
    strcpy(pessoa[0].endereco_residencial.numero,"123");
    strcpy(pessoa[0].endereco_residencial.complemento,"casa");
    strcpy(pessoa[0].endereco_residencial.cidade,"Araraquara");
    strcpy(pessoa[0].endereco_residencial.estado,"SP");
    strcpy(pessoa[0].endereco_residencial.cep,"Indefinido");
    strcpy(pessoa[0].endereco_comercial.rua,"Arco Verde");
    strcpy(pessoa[0].endereco_comercial.numero,"440");
    strcpy(pessoa[0].endereco_comercial.complemento,"fabrica");
    strcpy(pessoa[0].endereco_comercial.cidade,"Ribeirao Preto");
    strcpy(pessoa[0].endereco_comercial.estado,"SP");
    strcpy(pessoa[0].endereco_comercial.cep,"Indefinido");
} 
{
    strcpy(pessoa[1].nome,"Isadora Fernandes.");
    strcpy(pessoa[1].cpf,"010101010-01");
    strcpy(pessoa[1].sexo,"Feminina");
    strcpy(pessoa[1].estadocivil,"Solteira");
    strcpy(pessoa[1].salario,"R$1050.50");
    strcpy(pessoa[1].identidade,"Indefinido");
    pessoa[1].celular.ddd=16;
    strcpy(pessoa[1].celular.telefone,"010101010");
    pessoa[1].telefone_residencial.ddd=35;
    strcpy(pessoa[1].telefone_residencial.telefone,"984115833");
    pessoa[1].data_nascimento.dia=10;
    pessoa[1].data_nascimento.mes=01;
    pessoa[1].data_nascimento.ano=2001;
    pessoa[1].data_ingresso.dia=01;
    pessoa[1].data_ingresso.mes=02;
    pessoa[1].data_ingresso.ano=2020;
    strcpy(pessoa[1].endereco_residencial.rua,"proximo a casa");
    strcpy(pessoa[1].endereco_residencial.numero,"123");
    strcpy(pessoa[1].endereco_residencial.complemento,"casa");
    strcpy(pessoa[1].endereco_residencial.cidade,"Ribeirao Preto");
    strcpy(pessoa[1].endereco_residencial.estado,"sp");
    strcpy(pessoa[1].endereco_residencial.cep,"Indefinido");
    strcpy(pessoa[1].endereco_comercial.rua,"josemelo");
    strcpy(pessoa[1].endereco_comercial.numero,"440");
    strcpy(pessoa[1].endereco_comercial.complemento,"fabrica");
    strcpy(pessoa[1].endereco_comercial.cidade,"Batatais");
    strcpy(pessoa[1].endereco_comercial.estado,"SP");
    strcpy(pessoa[1].endereco_comercial.cep,"Indefinido");
}
{
    strcpy(pessoa[2].nome,"Brena Stephany.");
    strcpy(pessoa[2].cpf,"1111111-01");
    strcpy(pessoa[2].sexo,"Feminino");
    strcpy(pessoa[2].estadocivil,"Solteira");
    strcpy(pessoa[2].salario,"R$10000");
    strcpy(pessoa[2].identidade,"Indefinido");
    pessoa[2].celular.ddd=16;
    strcpy(pessoa[2].celular.telefone,"010101010");
    pessoa[2].telefone_residencial.ddd=35;
    strcpy(pessoa[2].telefone_residencial.telefone,"984115833");
    pessoa[2].data_nascimento.dia=25;
    pessoa[2].data_nascimento.mes=04;
    pessoa[2].data_nascimento.ano=2001;
    pessoa[2].data_ingresso.dia=01;
    pessoa[2].data_ingresso.mes=02;
    pessoa[2].data_ingresso.ano=2020;
    strcpy(pessoa[2].endereco_residencial.rua,"Rua Guia Lopes");
    strcpy(pessoa[2].endereco_residencial.numero,"941");
    strcpy(pessoa[2].endereco_residencial.complemento,"apartamento");
    strcpy(pessoa[2].endereco_residencial.cidade,"Capitolio");
    strcpy(pessoa[2].endereco_residencial.estado,"SP");
    strcpy(pessoa[2].endereco_residencial.cep,"Indefinido");
    strcpy(pessoa[2].endereco_comercial.rua,"nao possui");
    strcpy(pessoa[2].endereco_comercial.numero,"noa possui");
    strcpy(pessoa[2].endereco_comercial.complemento,"nao possui");
    strcpy(pessoa[2].endereco_comercial.cidade,"nao possui");
    strcpy(pessoa[2].endereco_comercial.estado,"nao possui");
    strcpy(pessoa[2].endereco_comercial.cep,"nao possui");
}
{
    strcpy(pessoa[3].nome,"Marta Carvalho.");
    strcpy(pessoa[3].cpf,"010101010-01");
    strcpy(pessoa[3].sexo,"Feminino");
    strcpy(pessoa[3].estadocivil,"Casada");
    strcpy(pessoa[3].salario,"R$00");
    strcpy(pessoa[3].identidade,"Indefinido");
    pessoa[3].celular.ddd=16;
    strcpy(pessoa[3].celular.telefone,"010101010");
    pessoa[3].telefone_residencial.ddd=35;
    strcpy(pessoa[3].telefone_residencial.telefone,"984115833");
    pessoa[3].data_nascimento.dia=28;
    pessoa[3].data_nascimento.mes=06;
    pessoa[3].data_nascimento.ano=1984;
    pessoa[3].data_ingresso.dia=01;
    pessoa[3].data_ingresso.mes=02;
    pessoa[3].data_ingresso.ano=2020;
    strcpy(pessoa[3].endereco_residencial.rua,"walsomiro");
    strcpy(pessoa[3].endereco_residencial.numero,"81");
    strcpy(pessoa[3].endereco_residencial.complemento,"casa");
    strcpy(pessoa[3].endereco_residencial.cidade,"Passos");
    strcpy(pessoa[3].endereco_residencial.estado,"MG");
    strcpy(pessoa[3].endereco_residencial.cep,"Indefinido");
    strcpy(pessoa[3].endereco_comercial.rua,"josemelo");
    strcpy(pessoa[3].endereco_comercial.numero,"440");
    strcpy(pessoa[3].endereco_comercial.complemento,"fabrica");
    strcpy(pessoa[3].endereco_comercial.cidade,"Brodowski");
    strcpy(pessoa[3].endereco_comercial.estado,"SP");
    strcpy(pessoa[3].endereco_comercial.cep,"Indefinido");
}
{
    strcpy(pessoa[4].nome,"Ana paula da silva.");
    strcpy(pessoa[4].cpf,"010101010-01");
    strcpy(pessoa[4].sexo,"Masculino");
    strcpy(pessoa[4].estadocivil,"Solteiro");
    strcpy(pessoa[4].salario,"R$1050.50");
    strcpy(pessoa[4].identidade,"Indefinido");
    pessoa[4].celular.ddd=16;
    strcpy(pessoa[4].celular.telefone,"010101010");
    pessoa[4].telefone_residencial.ddd=35;
    strcpy(pessoa[4].telefone_residencial.telefone,"984115833");
    pessoa[4].data_nascimento.dia=04;
    pessoa[4].data_nascimento.mes=02;
    pessoa[4].data_nascimento.ano=1995;
    pessoa[4].data_ingresso.dia=01;
    pessoa[4].data_ingresso.mes=02;
    pessoa[4].data_ingresso.ano=2020;
    strcpy(pessoa[4].endereco_residencial.rua,"Narnia");
    strcpy(pessoa[4].endereco_residencial.numero,"81");
    strcpy(pessoa[4].endereco_residencial.complemento,"casa");
    strcpy(pessoa[4].endereco_residencial.cidade,"Passos");
    strcpy(pessoa[4].endereco_residencial.estado,"MG");
    strcpy(pessoa[4].endereco_residencial.cep,"Indefinido");
    strcpy(pessoa[4].endereco_comercial.rua,"josemelo");
    strcpy(pessoa[4].endereco_comercial.numero,"440");
    strcpy(pessoa[4].endereco_comercial.complemento,"fabrica");
    strcpy(pessoa[4].endereco_comercial.cidade,"Brodowski");
    strcpy(pessoa[4].endereco_comercial.estado,"SP");
    strcpy(pessoa[4].endereco_comercial.cep,"Indefinido");
}
    printf("<< Cadastro de Usuários >>\n");
    int opcao=0,aux=0,aux2,aux3;
    do
    {
        printf("1 - Listar todos os cadastros\n");
        printf("2 - Cadastrar/Sobrescrever nova pessoa (pedir em qual posição do vetor ela serácadastrada 0,1,2,3, ou 4)\n");
        printf("3 - Listar as pessoas que nasceram depois de 1990.\n");
        printf("4 - Copiar dados de um cadastro para outro.\n");
        printf("0 - SAIR.\n");
        scanf("%d",&opcao);


        if (opcao == 1){//Primeira Opcao
            system("cls");
            for (int i = 0; i < 5; i++)
            {
                printf("%d. %s\n",i+1,pessoa[i].nome);
            }
            
        }else if (opcao==2){//Segunda Opcao
            int opcao=0;
            printf("Cadastro de uma nova pessoa.\n Digite qual a posição do vetor para ser cadastrado: ");
            scanf("%d",&opcao);
            printf("Digite o nome: ");
            fgets(pessoa[opcao].nome,50,stdin);
            printf("Digite o CPF: ");
            fgets(pessoa[opcao].cpf,50,stdin);
            printf("Digite o SEXO: ");
            fgets(pessoa[opcao].sexo,50,stdin);
            printf("Digite o ENDERECO comercial rua: ");
            fgets(pessoa[opcao].endereco_comercial.rua,50,stdin);
            printf("Digite o ENDERECO comercial numero: ");
            fgets(pessoa[opcao].endereco_comercial.numero,50,stdin);
            printf("Digite o endereco comercial cidade: ");
            fgets(pessoa[opcao].endereco_comercial.cidade,50,stdin);
            printf("Digite o o endereco comercial cep: ");
            fgets(pessoa[opcao].endereco_comercial.cep,50,stdin);
            printf("Digite o endereco comercial complemento: ");
            fgets(pessoa[opcao].endereco_comercial.complemento,50,stdin);
            printf("Digite o endereco comercial estado: ");
            fgets(pessoa[opcao].endereco_comercial.estado,50,stdin);

            printf("Digite o ENDERECO residencial rua: ");
            fgets(pessoa[opcao].endereco_residencial.rua,50,stdin);
            printf("Digite o ENDERECO residencial numero: ");
            fgets(pessoa[opcao].endereco_residencial.numero,50,stdin);
            printf("Digite o endereco residencial cidade: ");
            fgets(pessoa[opcao].endereco_residencial.cidade,50,stdin);
            printf("Digite o o endereco residencial cep: ");
            fgets(pessoa[opcao].endereco_residencial.cep,50,stdin);
            printf("Digite o endereco residencial complemento: ");
            fgets(pessoa[opcao].endereco_residencial.complemento,50,stdin);
            printf("Digite o endereco residencial estado: ");
            fgets(pessoa[opcao].endereco_residencial.estado,50,stdin);

            printf("Digite o estado civil: ");
            fgets(pessoa[opcao].estadocivil,50,stdin);
            printf("Digite o salario: ");
            fgets(pessoa[opcao].salario,50,stdin);
            printf("Digite o identidade: ");
            fgets(pessoa[opcao].identidade,50,stdin);
            printf("Digite o celular DDD: ");
            fgets(pessoa[opcao].celular.ddd,50,stdin);
            printf("Digite o celular numero: ");
            fgets(pessoa[opcao].celular.telefone,50,stdin);
            printf("Digite o telefone DDD: ");
            fgets(pessoa[opcao].telefone_residencial.ddd,50,stdin);
            printf("Digite o telefone residencial: ");
            fgets(pessoa[opcao].telefone_residencial.telefone,50,stdin);
            printf("Digite  a data de nascimento dia: ");
            fgets(pessoa[opcao].data_nascimento.dia,50,stdin);
            printf("Digite a data de nascimento mes: ");
            fgets(pessoa[opcao].data_nascimento.mes,50,stdin);
            printf("Digite a data de nascimento ano: ");
            fgets(pessoa[opcao].data_nascimento.ano,50,stdin);

            printf("Digite  a data de ingresso dia: ");
            fgets(pessoa[opcao].data_ingresso.dia,50,stdin);
            printf("Digite a data de ingresso mes: ");
            fgets(pessoa[opcao].data_ingresso.mes,50,stdin);
            printf("Digite a data de ingresso ano: ");
            fgets(pessoa[opcao].data_ingresso.ano,50,stdin);

        }else if (opcao==3){//Terceira opcao
            for (int i = 0; i < 5; i++)
            {
                if(pessoa[i].data_nascimento.ano>1990){
                    printf("%d. %s\n",i+1,pessoa[i].nome);
                }
            }
            
        }else if (opcao==4){//Quarta opcao
            printf("Digite qual pessoa deseja ser substituida: ");
            scanf("%d",&aux2);
            printf("Digite por quem ela sera substituida: ");
            scanf("%d",&aux3);
            pessoa[aux2]=pessoa[aux3];
        }else if (opcao==0){
            aux=1;
        }
        
    } while (aux==0);


    return 0;
}

/*
1) 4.Define a estrutura necessária para armazenar os dados a seguir. 
Use as subestruturas dos   exercícios   anteriores para definir os tipos
dos campos com asterisco. Dê suporte para o cadastro de 5 pessoas:  

Cadastro
+------------+---------------------+--------------------------+------------------------+
| Nome       | Endereço comercial* |         Salário          |       Idade            | 
+------------+---------------------+--------------------------+--------+---------------+
| CPF        | Estado civil        |        Telefone**        | Data de nascimento *** |   
+------------+---------------------+--------------------------+--------+---------------+
| Sexo       |Endereço residencial*|  Telefone residencial ** | Data de ingresso ***   | 
+------------+---------------------+--------------------------+--------+---------------+

(a)Cadastre 5 usuários no seu código (não pedir para digitar – cadastre no próprio código
fonte, utilizando comandos de atribuição). A ideia disso é evitar digitação excessiva
durante o teste do programa.

(b)Crie um menu com as seguintes opções:
    a.Listar todos os cadastros
    b.Cadastrar/Sobrescrever nova pessoa (pedir em qual posição do vetor ela será cadastrada 0,1,2,3, ou 4)
    c.Listar as pessoas que nasceram depois de 1990.
    d.Copiar dados de um cadastro para outro


-------------------------------------------------------------------------------
Exemplo de saída:

=======Exemplo do menu=======

<< Cadastro de Usuários >> 

1 - Listar todos os cadastros  
2 - Cadastrar/Sobrescrever nova pessoa  
3 - Listar as pessoas que nasceram depois de 1990  
4 - Copiar dados de um cadastro para outro   
0 - Sair 
Escolha uma opção: 1

Lista de usuários cadastrados: 

Posição: 0 
Informacoes Pessoais: 
Nome: Cersei Lannister, CPF: 111111111-11, Sexo: F, Estado Civil: Viuva 
Salario: 111111, Identidade:  WE-11.111.111 
Telefone residencial: (11) 11111-1111 
Telefone: (11) 91111-1111 
Data de Nascimento:  1 de janeiro de 262 
Data de Ingresso: 1 de janeiro de 276 

Endereço comercial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Posição: 1 
Informacoes Pessoais: 
Nome:  John Snow, CPF: 222222222-22, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-22.222.222 
Telefone residencial: (11) 22222-2222 
Telefone: (11) 92222-2222 
Data de Nascimento:  2 de fevereiro de 281 
Data de Ingresso: 2 de fevereiro de 295 

Endereço comercial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Posição: 2 
Informacoes Pessoais: 
Nome: Jaime Lannister, CPF: 333333333-33, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-33.333.333 
Telefone residencial: (11) 11111-1111 
Telefone: (11) 91111-1111 
Data de Nascimento:  1 de janeiro de 262 
Data de Ingresso: 1 de janeiro de 276 

Endereço comercial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Posição: 3 
Informacoes Pessoais: 
Nome: Samwell Tarly, CPF: 444444444-44, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-44.444.444 
Telefone residencial: (11) 22222-2222 
Telefone: (11) 92222-2222 
Data de Nascimento:  2 de fevereiro de 283 
Data de Ingresso: 2 de fevereiro de 295 

Endereço comercial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

-------------------------------------------------------------------------------
*/