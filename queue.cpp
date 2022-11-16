//
// Created by 93539 on 2022/11/16.
//

#include "queue.h"

void init_queue(Queue &Q){
    Q.front=Q.tail=(LinkList)malloc(sizeof(LinkNode));
    Q.tail->next=NULL;
}

bool is_empty(Queue Q){
    if(Q.front==Q.tail){
        return true;
    }else{
        return false;
    }
}

void en_queue(Queue &Q,ElemType data){
    LinkList new_node=(LinkList)malloc(sizeof(LinkNode));
    new_node->data=data;
    new_node->next=Q.tail->next;
    Q.tail->next=new_node;
    Q.tail=Q.tail->next;
}

bool out_queue(Queue &Q,ElemType &value){
    if(is_empty(Q)){
        return false;
    }else{
        LinkList p=Q.front->next;
        Q.front->next=p->next;
        value=p->data;
        if(p==Q.tail){
            Q.tail=Q.front;
        }
        free(p);
        return true;
    }
}