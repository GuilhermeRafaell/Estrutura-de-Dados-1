#include <stdio.h>
#include <stdlib.h>
#include "TLinkedList.h"


typedef struct list_node list_node;

struct list_node
{
    struct aluno data;
    list_node *next;
};

struct TLinkedList
{
    list_node *head;
};

//Cria a lista
//Retorna o ponteiro para a lista
TLinkedList *list_create()
{
    TLinkedList *list;
    list = malloc(sizeof(TLinkedList));
    if (list != NULL)
    {
        list->head = NULL;
    }
    return list;
}

//Libera a lista
//dado a lista e todos os demais elementos
//Retorno INVALID_NULL_POINTER(-1) para erro e SUCCESS(0) para sucesso
int list_free(TLinkedList *list)
{
    if (list == NULL)
        return INVALID_NULL_POINTER;

    else
    {
        //l->head funciona como uma outra variavel auxiliar para armazenar a proxima posicao
        list_node *aux;
        aux = list->head;

        while (aux != NULL)
        {
            list->head = aux->next;
            free(aux);
            aux = list->head;
        }
        free(list);
        return SUCCESS;
    }
}

//Insere um elemento na primeira posicao da lista
//dado a lista e o aluno
//Retorno INVALID_NULL_POINTER(-1) ou OUT_OF_MEMORY(-2) para erro e SUCCESS(0) para sucesso
int list_push_front(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(list_node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->next = list->head;
        list->head = node;
        return SUCCESS;
    }
}

//Insere um elemento na ultima posicao da lista
//dado a lista e o aluno
//Retorno INVALID_NULL_POINTER(-1) ou OUT_OF_MEMORY(-2) para erro e SUCCESS(0) para sucesso
int list_push_back(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
        return INVALID_NULL_POINTER;
    else
    {
        list_node *node;
        node = malloc(sizeof(list_node));

        if (node == NULL)
            return OUT_OF_MEMORY;

        else
        {
            node->data = al;
            node->next = NULL;

            if (list->head == NULL)
                list->head = node;

            else
            {
                //Cria um node auxiliar para percorrer a lista ate o ultimo elemento
                list_node *temp;
                temp = list->head;

                while (temp->next != NULL)
                {
                    temp->data = al;
                }
                temp->next = node; //Ultimo elem aponta para o novo a ser enserido por ultimo
            }
            return SUCCESS;
        }
    }
}

//Insere um elemento em uma determinada posicao da lista
//dado a lista, a posicao e o aluno
//Retorno INVALID_NULL_POINTER(-1) ou OUT_OF_MEMORY(-2) para erro e SUCCESS(0) para sucesso
int list_insert(TLinkedList *list, int pos, struct aluno al)
{
    if (list == NULL)
        return INVALID_NULL_POINTER;

    else
    {
        list_node *node, *anterior, *atual;
        node = malloc(sizeof(list_node));

        if (node == NULL)
            return OUT_OF_MEMORY;

        else
        {
            node->data = al;

            if (pos == 1)
            {
                node->next = list->head;
                list->head = node;
                return SUCCESS;
            }
            else
            {
                int i;
                atual = list->head;
                anterior = list->head;

                for (i = 1; i < pos; i++)
                {
                    anterior = atual;
                    atual = atual->next;
                    if (atual == NULL && i < (pos - 1))
                        return OUT_OF_RANGE;
                }
                anterior->next = node;
                node->next = atual;
                return SUCCESS;
            }
        }
    }
}

//Insere um elemento de maneira ordenada na lista
//dado a lista e o aluno
//Retorno INVALID_NULL_POINTER(-1) ou OUT_OF_MEMORY(-2) para erro e SUCCESS(0) para sucesso
int list_insert_sorted(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
        return INVALID_NULL_POINTER;

    else
    {
        list_node *node, *current, *prev;
        node = malloc(sizeof(list_node));

        if (node == NULL)
            return OUT_OF_MEMORY;

        else
        {
            node->data = al;

            current = list->head;
            prev = NULL;

            //Caso de nenhum elemento na lista
            if (list->head == NULL || list->head->data.matricula > node->data.matricula)
            {
                node->next = list->head;
                list->head = node;
                return SUCCESS;
            }
            else
            {
                while ((current != NULL) && current->data.matricula < node->data.matricula)
                {
                    prev = current;
                    current = current->next;
                }
                prev->next = node;
                node->next = current;
                return SUCCESS;
            }
        }
    }
}

//Verifica o tamanho da lista
//dado a lista
//Retorno INVALID_NULL_POINTER(-1) para erro e a tamanho da lista para sucesso
int list_size(TLinkedList *list)
{
    if (list == NULL)
        return INVALID_NULL_POINTER;

    else
    {
        list_node *aux;
        int size = 0;
        aux = list->head;

        while (aux->next != NULL)
        {
            size++;
            aux = aux->next;
        }
        return size;
    }
}

//Remove o primeiro elemento da lista
//dado a lista
//Retorno INVALID_NULL_POINTER(-1), ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_pop_front(TLinkedList *list)
{
    if (list == NULL)
        return INVALID_NULL_POINTER;

    else
    {
        //Caso de nenhum elemento na lista
        if (list->head == NULL)
            return ELEM_NOT_FOUND;

        else
        {
            list_node *aux;
            aux = list->head;
            list->head = aux->next;

            return SUCCESS;
        }
    }
}

//Remove o ultimo elemento da lista
//dado a lista
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_pop_back(TLinkedList *list)
{
    if (list == NULL)
        return INVALID_NULL_POINTER;

    else if (list->head == NULL)
        return ELEM_NOT_FOUND;

    else
    {
        list_node *anterior, *atual;
        anterior = list->head;
        atual = list->head;

        while (atual->next != NULL)
        {
            anterior = atual;
            atual = atual->next;
        }
        anterior->next = NULL;
        free(atual);
        return SUCCESS;
    }
}

//Remove um elemento da lista pela matricula
//dado a lista e a matricula
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_erase_data(TLinkedList *list, int mat)
{
    if (list == NULL)
        return INVALID_NULL_POINTER;

    else
    {
        list_node *anterior, *atual;
        anterior = list->head;
        atual = list->head;

        if (list->head == NULL)
            return ELEM_NOT_FOUND;

        else if (atual->data.matricula == mat)
        {
            list->head = list->head->next;
            free(atual);
            return SUCCESS;
        }
        else
        {
            while (atual != NULL && atual->data.matricula != mat)
            {
                anterior = atual;
                atual = atual->next;
            }
            if (atual == NULL)
                return ELEM_NOT_FOUND;

            else
            {
                anterior->next = atual->next;
                free(atual);
                return SUCCESS;
            }
        }
    }
}

//Remove um elemento de uma determindada posicao da lista
//dado a lista e a posicao
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_erase_pos(TLinkedList *list, int pos)
{
    if (list == NULL)
        return INVALID_NULL_POINTER;

    else
    {
        list_node *atual, *anterior;
        int contador = 1;

        atual = list->head;
        anterior = list->head;

        if (list->head == NULL)
            return ELEM_NOT_FOUND;

        else if (pos == 1)
        {
            list->head = list->head->next;
            free(atual);
            return SUCCESS;
        }
        else
        {
            while (atual != NULL && contador != pos)
            {
                contador++;
                anterior = atual;
                atual = atual->next;
            }
            if (atual == NULL)
                return ELEM_NOT_FOUND;

            else
            {
                anterior->next = atual->next;
                free(atual);
                return SUCCESS;
            }
        }
    }
}

//Retorna o aluno
//dado a posicao
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_find_pos(TLinkedList *list, int pos, struct aluno *al)
{
    if (list == NULL)
        return INVALID_NULL_POINTER;

    else
    {
        if (list->head == NULL)
            return ELEM_NOT_FOUND;

        else
        {
            list_node *aux;
            int contador = 1;

            aux = list->head;

            while (aux != NULL && contador != pos)
            {
                contador++;
                aux = aux->next;
            }
            if (aux == NULL)
                return ELEM_NOT_FOUND;

            else
            {
                *al = aux->data;
                return SUCCESS;
            }
        }
    }
}

//Consulta os dados de uma matricula na lista
//dado a lista, a matricula e o ponteiro para aluno que recebe os dados
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_find_mat(TLinkedList *list, int mat, struct aluno *al){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        if(list->head == NULL)
            return ELEM_NOT_FOUND;
        
        else{
            list_node *aux;
            
            aux = list->head;
            while(aux != NULL && aux->data.matricula != mat){
                aux = aux->next;
            }
            if(aux->next == NULL)
                return ELEM_NOT_FOUND;

            else{
                *al = aux->data;
                return SUCCESS;
            }
        }
    }
}

//Consulta os dados da primeira posicao da lista
//dado a lista e o ponteiro para aluno que recebe os dados
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_front(TLinkedList *list, struct aluno *al){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    
    else{
        if(list->head == NULL)
            return ELEM_NOT_FOUND;

        else{
            *al = list->head->data;
            return SUCCESS;
        }    
    }
}

//Consulta os dados da ultima posicao da lista
//dado a lista e o ponteiro para aluno que recebe os dados
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_back(TLinkedList *list, struct aluno *al){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        if(list->head == NULL)
            return ELEM_NOT_FOUND;
        
        else{
            list_node *aux;
            aux = list->head;

            while(aux->next != NULL){
                aux = aux->next;
            }
            *al = aux->data;
            return SUCCESS;
        }
    }
}

//Informa a posicao de um elemento na lista
//dado a lista, a matricula e o ponteiro de inteiro que recebe a posicao
//Retorno INVALID_NULL_POINTER(-1) ou ELEM_NOT_FOUND(-4) para erro e SUCCESS(0) para sucesso
int list_get_pos(TLinkedList *list, int mat, int *pos){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        if(list->head == NULL)
            return ELEM_NOT_FOUND;
    
        else{
            list_node *aux;
            int contador =1;

            aux = list->head;

            while(aux != NULL && aux->data.matricula != mat){
                contador++;
                aux = aux->next;
            }
            if(aux == NULL)
                return ELEM_NOT_FOUND;
            
            else{
                *pos = contador;
                return SUCCESS;
            }
        }
    }
}

//Imprime a lista
//dado a lista
//Retorno INVALID_NULL_POINTER(-1) para erro e SUCCESS(0) para sucesso
int list_print(TLinkedList *list)
{
    if (list == NULL)
        return INVALID_NULL_POINTER;

    else
    {
        list_node *aux;
        aux = list->head;

        printf("\nImprimindo a lista\n");
        while (aux != NULL)
        {
            printf("\n-------------------\n");
            printf("Matricula: %d\n", aux->data.matricula);
            printf("Nome %s\n", aux->data.nome);
            printf("Notas: %f; %f; %f;\n", aux->data.n1, aux->data.n2, aux->data.n3);

            aux = aux->next;
        }
        printf("\nFim da lista \n");
        return SUCCESS;
    }
}