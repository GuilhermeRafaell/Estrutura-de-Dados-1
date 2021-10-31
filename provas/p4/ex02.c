/* ex02
Uma das utilidades das listas circulares dinâmicas é a possibilidade de percorrer
todos os elementos por diversas vezes em um loop. Modifique o TAD para incluir uma
função que retornará sempre o próximo elemento. Por exemplo, se a lista não foi
percorrida ainda, o próximo elemento é a cabeça. Depois, ao chamar a função
novamente, será devolvido o segundo elemento, e assim sucessivamente.
*/
(a) mostrar como fica a estrutura do TAD
    
    typedef struct TCircList
    {
        CLNode *end;
        CLNode *next;
    }TCircList;

(b) mostrar a função que retorna o próximo elemento

    int get_next(TCircList *li, aluno *al){
        if(li == NULL){
            return -1;
        }
 
	    if(li->end == NULL){
	        return -1;
	    }

        *al = li->next->data;
        li->next = li->next->next;
        return 0;
    }

*Não é necessário mostrar as outras funções afetadas pela modificação proposta

(c) Qual a diferença entre o vetor de acesso circular usado na 
implementação de uma fila estática de uma lista circular?

//reponder aqui:
    Em primeira instacia a diferenca é que na fila estatica utilizamos um vetor circular com ponteiros que indicam o começo da fila (front) e o espaço vago desta (rear), enquanto em uma lista circular temos ponteiros
distintos sendo eles o que aponta para o final da lista (li->end), tendo acesso tambem a seu sucessor o primeiro da lista (li->end->next).Na estrura de dados de uma lista circular tambem temos as operacoes de insere
no inicio e no fim, enquanto em uma fila estática com um vetor de acesso circular apenas Insere() e Remove(), isto é como o nome diz em uma fila retira-se apenas o inicio da fila e insere apenas no fim.
    Ao implementarmos um vetor de acesso circular na fila estatica podemos transformar as operacao de modo que o tempo computacional transforme de O(n) para O(1), isto é , com a aplicacao
de um ponteiro "rear" por exemplo que demarca sempre o proximo espaco vazio na fila podemos percorre-la de modo a preencher os espacios vazios ate que a file esgote de espaço. Com isso , ao chegarmos
no numero maximo de elementos na lista , deveriamos apenas resetar o ponteiro "rear" para que apontasse para a cabeça da lista (rear = (rear+1) % MAX;). Essa aplicação deve-se ao fato de que ao não
utilizarmos isso , com a realização de operações como Remove(), Insere(), a lista ficaria cheia facilmente restando apenas com a alternativa de alocacao de mas memoria para tal. 


*/