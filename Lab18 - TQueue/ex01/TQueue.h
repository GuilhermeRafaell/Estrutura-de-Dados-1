#ifndef _TQueue_
#define _TQueue_

#define SUCCESS 0
#define ERROR -1
#define MAX 100
#include "aluno.h"

typedef struct TQueue TQueue;

TQueue *queue_create();
int queue_free(TQueue *fi);

int queue_push(TQueue *fi, struct aluno al);
int queue_pop(TQueue *fi);
int queue_top(TQueue *fi, struct aluno *al);

int queue_size(TQueue *fi);
int queue_empty(TQueue *fi);
int queue_full(TQueue *fi);
int queue_print(TQueue *fi);


#endif