#include <stdlib.h>
#include <stdio.h>
#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4
/*
Considere o TAD TDLinkedList que serve para manipular uma lista duplamente
encadeada de alunos (a lista usada na prática 16 – copiar o código da 
SUA PRÁTICA)

Implemente uma função chamada concat3, cuja funcionalidade é concatenar 
(juntar) 3 listas. Seu cabeçalho é o seguinte:

int list_concat3(TDLinkedList *pre, TDLinkedList *in, TDLinkedList *pos)

pre  - lista a ser concatenada e que vai ficar no início (antes de /in/). 
      É também a lista de destino final (lista que receberá a concatenação 
      de todas as listas).  
in – lista a ser concatenada e que vai ficar entre as listas /pre/ e /pos/. 
pos – lista a ser concatenada no final (depois de /in/) 

Retorno da função: 0 para sucesso; -1 para qualquer tipo de erro
Na implementação do list_concat3, *nenhum elemento é copiado ou movido*,
somente os ponteiros internos das três listas são rearranjados.
Após a concatenação, as listas continuarão existindo, no entanto,
as listas in e pos ficarão sem elementos (vazia). 
O resultado final da concatenação ficará na lista /pre/.  

Saída concatenada (armazenada em \pre\):
pre <-> in <-> pos
*/

int list_concat3(TDLinkedList *pre, TDLinkedList *in, TDLinkedList *pos){
      if(pre == NULL || in == NULL || pos == NULL)
            return INVALID_NULL_POINTER;

      else{
      TDLinkedList *list;
      DLNode *aux1, *aux2, *aux3;
      DLNode *atual, *prox;

      atual = pre->begin;
      aux1 = pre->begin;
      aux2 = in->begin;
      aux3 = pos->begin;

      pre->end = aux1;
      in->end = aux3;

      while(atual != NULL){
            prox = atual->next;
            list->begin = atual;
            atual = prox;
      }
      pre = list;

      list_free(in);
      list_free(pos);

      return SUCCESS;
      }
}

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct TDLinkedList TDLinkedList;

typedef struct DLNode DLNode;

struct DLNode{
    struct aluno data;
    DLNode *next;
    DLNode *prev;
};

struct TDLinkedList{
    DLNode *begin;
    DLNode *end;
    int size;
};

TDLinkedList *list_create(){
    TDLinkedList *list;

    list = malloc(sizeof(TDLinkedList));

    if(list != NULL){
        list->begin = NULL;
        list->end = NULL;
        list->size = 0;
    }
    return list;
}

int list_free(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        DLNode *atual, *prox;

        atual = list->begin;

        while(atual != NULL){
            prox = atual->next;
            free(atual);
            atual = prox;
        }
        free(list);
        return SUCCESS;
    }
}

int list_push_front(TDLinkedList *list, struct aluno al){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    
    else{
        DLNode *node;
        node = malloc(sizeof(TDLinkedList));

        if(node == NULL)
            return OUT_OF_MEMORY;

        else{
            //Caso padrao
            node->data = al;
            node->prev = NULL;
            node->next = list->begin;

            //Caso da lista vazia
            if(list->begin == NULL){
                list->begin = node;
                list->end = node;
                list->size++;
            }
            return SUCCESS;
        }
    }
}

int list_push_back(TDLinkedList *list, struct aluno al){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        DLNode *node;
        node = malloc(sizeof(TDLinkedList));

        if(node == NULL)
            return OUT_OF_MEMORY;

        else{
            node->data = al;
            node->next = NULL;

            //Caso de lista vazia
            if(list->begin == NULL){
                list->begin = node;
                list->end = node;
                node->prev = NULL;
                list->size++;
            }
            //Caso padrao
            else{
                list->end->next = node;
                node->prev = list->end;
                list->end = node;
                list->size++;
            }

            return SUCCESS;
        }
    }
}

int list_insert(TDLinkedList *list, int pos, struct aluno al){
    if(list == NULL)
        return INVALID_NULL_POINTER;
        
    if(pos < 1 || pos > list->size+1)
        return OUT_OF_RANGE;

    else{
        DLNode *node;
        node = malloc(sizeof(TDLinkedList));

        if(node == NULL)
            return OUT_OF_MEMORY;
        
        else{
            node->data = al;
            //Caso de lista vazia
            if(list->size == 0){
                node->prev = NULL;
                node->next = NULL;
                list->begin = node;
                list->end = node;
                list->size++;
            }
            //Caso para inserir na primeira posicao 
            else if(pos == 1){
                node->prev=NULL;
                node->next = list->begin;
                list->begin->prev = node;
                list->begin = node;
                list->size++;
            }
            //Caso padrao
            else{
                int contador=1;
                DLNode *aux;

                aux = list->begin;
                while(contador < pos-1){
                    aux = aux->next;
                    contador++;
                }
                node->prev = aux;
                node->next = aux->next;
                aux->next->prev = node;
                aux->next = node;
                list->size++;
            }
            return SUCCESS;
        }
    }
}

int list_size(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    
    else{
        return list->size;
    }
}

int list_pop_front(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        //Caso de lista vazia
        if(list->begin == NULL)
            return ELEM_NOT_FOUND;

        //Caso padrao
        else{
            DLNode *aux;
            aux = list->begin;

            list->begin = list->begin->next;
            list->begin->prev = NULL;
            free(aux);
            list->size--;

            return SUCCESS;
        }
    }
}

int list_pop_back(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        //Caso de lista vazia
        if(list->begin == NULL)
            return ELEM_NOT_FOUND;

        //Caso padrao
        else{
            DLNode *aux;
            aux = list->end;

            list->end = list->end->prev;
            list->end->next = NULL;
            free(aux);
            list->size--;

            return SUCCESS;
        }
    }
}

int list_erase(TDLinkedList *list, int pos){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        DLNode *aux;
        int contador = 1;

        //Caso seja a primeira posicao
        if(pos == 1){
            list_pop_front(list);
        }
        //Caso seja a ultima posicao
        else if(pos == list->size){
            list_pop_back(list);
        }
        //Caso padrao
        else{
            aux = list->begin;
            
            while(aux != NULL && pos != contador){
                aux = aux->next;
                contador++;
            }

            if(aux == NULL)
                return ELEM_NOT_FOUND;

            else{
                aux->prev->next = aux->next;
                aux->next->prev = aux->prev;
                free(aux);
                list->size--;
            }
        }
        return SUCCESS;
    }
}

int list_find_pos(TDLinkedList *list, int pos, struct aluno *al){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        //Caso de lista vazia
        if(list->begin == NULL)
            return ELEM_NOT_FOUND;

        //Caso padrao
        else{
            DLNode *aux;
            int contador = 1;
            aux = list->begin;

            while(aux != NULL && contador != pos){
                aux = aux->next;
                contador++;
            }
            
            if(aux == NULL)
                return ELEM_NOT_FOUND;

            else{
                *al = aux->data;
                return SUCCESS;
            }
        }
    }
}


int list_find_mat(TDLinkedList *list, int mat, struct aluno *al){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        //Caso de lista vazia
        if(list->begin == NULL)
            return ELEM_NOT_FOUND;

        //Caso padrao
        else{
            DLNode *aux;
            aux = list->begin;

            while(aux != NULL && aux->data.matricula != mat){
                aux = aux->next;
            }

            if(aux == NULL)
                return ELEM_NOT_FOUND;

            else{
                *al = aux->data;
                return SUCCESS;
            }
        }
    }
}

int list_front(TDLinkedList *list, struct aluno *al){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        //Caso de lista vazia
        if(list->begin == NULL)
            return ELEM_NOT_FOUND;

        //Caso padrao
        else{
            *al = list->begin->data;
            return SUCCESS;
        }
    }
}

int list_back(TDLinkedList *list, struct aluno *al){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        //Caso de lista vazia
        if(list->begin == NULL)
            return ELEM_NOT_FOUND;

        //Caso padrao
        else{
            *al = list->end->data;
            return SUCCESS;
        }
    }
}

int list_get_pos(TDLinkedList *list, int mat, int *pos){
    if(list == NULL)    
        return INVALID_NULL_POINTER;

    else{
        //Caso de lista vazia
        if(list->begin == NULL)
            return  ELEM_NOT_FOUND;
        
        //Caso padrao
        else{
            DLNode *aux;
            aux = list->begin;
            int contador = 1;

            while(aux != NULL && aux->data.matricula != mat){
                aux = aux->next;
                contador++;
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

int list_print_forward(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    
    else{
        DLNode *aux;
        aux = list->begin;

        printf("\nImprimindo a Lista\n");
        while(aux != NULL){
            printf("\n------------------\n");
            printf("Matricula: %d\n", aux->data.matricula);
            printf("Nome: %s\n", aux->data.nome);
            printf("Notas: %.1f; %.1f; %.1f;\n", aux->data.n1, aux->data.n2, aux->data.n3);
            aux = aux->next;
        }
        return SUCCESS;
    }
}

int list_print_reverse(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        DLNode *aux;
        aux = list->end;

        printf("\nImprimindo a Lista\n");
        while(aux != NULL){
            printf("\n------------------\n");
            printf("Matricula: %d\n", aux->data.matricula);
            printf("Nome: %s\n", aux->data.nome);
            printf("Notas: %.1f; %.1f; %.1f;\n", aux->data.n1, aux->data.n2, aux->data.n3);
            aux = aux->prev;
        }
        return SUCCESS;
    }
}
