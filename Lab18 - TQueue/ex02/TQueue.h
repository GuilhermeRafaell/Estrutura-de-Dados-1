#ifndef _TQueue_
#define _TQueue_

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4
#include "aluno.h"

typedef struct TQueue TQueue;

TQueue *queue_create();
int queue_free(TQueue *fi);

int queue_push(TQueue *fi, struct aluno al);
int queue_pop(TQueue *fi);
int queue_top(TQueue *fi, struct aluno *al);

int queue_size(TQueue *fi);
int queue_empty(TQueue *fi);
int queue_print(TQueue *fi);

#endif