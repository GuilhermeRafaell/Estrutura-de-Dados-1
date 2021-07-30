#include <stdio.h>
#include <string.h>

int main(void){ 
    char buff[5];
    int pass = 0;
    
    printf("\n Entre com a senha : \n"); 
    gets(buff);
    
    if (strcmp(buff, "1234")){ 
        printf ("\n Senha Errada \n");
    } else{        
        printf ("\n Senha Correta \n");
        pass = 1;     
    }
    
    if (pass){/* O usuário acertou a senha, poderá continuar*/
        printf ("\n Acesso liberado \n");
    } else {
        printf ("\n Acesso negado \n");
    }    
    
    return 0; 
    }  

/*
    a)Qual é a função do programa?
    Resposta:
    Identificar uma string de numeros , verificar se esta correta , caso esteja , retorna "Acesso liberado" , caso nao 
    esteja retorna "Acesso negado".

    b)Qual a saída quando a senha correta é digitada (senha correta: 1234)
    Resposta:
    Quando digitado a string , caso ela receba "1234" a funcao strcmp ira retornar 0 ,pois 
    eh igual a string definida,logo nao ira entrar no primeiro if de "Senha Errada", logo 
    em seguida entra na segunda condicao e retorna "Senha Correta". 


    c)Qual a saída para as seguintes senhas a.123 b.12345 c.123456 ?
    Resposta: 
    No primeiro caso a string digitada eh menor q a definida logo a funcao strcmp retorna <0 , entao ela 
    entra na primeira condicao retornando "Senha Errada" - "Acesso Negado". No segundo caso, a string digitada eh maior q
    a definida anteriormente logo a funcao strcmp retorna >0 ,entrando na primeira condicao retornando "Senha Errada" - "Acesso Negado".
    No terceiro caso a string digitada e h maior q a definida anteriormente logo a funcao strcmp retorna >0 ,
    entrando na primeira condicao retornando "Senha Errada", porem ocorre um imprevisto de invasao de memoria , alterando o valor de pass
    para um numero diferente de 0 retornando "Acesso Liberado".

    d)Em quais casos o programa obteve um comportamento inválido. Explique o motivo.
    Resposta:
    Ocorre invasao de memoria o digitar mais caracteres do que seu tamanho predefinmido (5) na string pedida.
    Ao digitar mais de 5 caracteres ocorre um problema pois o sistema sobreescreve o valor de "pass" e ao entrar
    com outro valor sem ser 0 ele retorna "Acesso Liberado".


*/