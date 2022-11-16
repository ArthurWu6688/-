//
// Created by 93539 on 2022/11/16.
//

#ifndef TREE1_QUEUE_H
#define TREE1_QUEUE_H

#include "standard_library.h"
#include "tree.h"

typedef BiTree ElemType;

typedef struct LinkNode{
    ElemType data;
    struct LinkNode *next;
}LinkNode,*LinkList;

typedef struct{
    LinkList front,tail;
}Queue;

void init_queue(Queue &Q);
bool is_empty(Queue Q);
void en_queue(Queue &Q,ElemType data);
bool out_queue(Queue &Q,ElemType &value);


#endif //TREE1_QUEUE_H
