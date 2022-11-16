//
// Created by 93539 on 2022/11/16.
//
#include "tree.h"
#include "queue.h"

void build_tree(BiTree &Tree){
    BiTree pNew;
    BiElemType data;
    LinkList pHead=NULL,pTail=NULL,ListPNew=NULL,pCur=NULL;
    while(scanf("%c",&data)){
        if(data=='\n'){
            break;
        }
        pNew=(BiTree)calloc(1,sizeof(BiTNode));
        pNew->data=data;
        ListPNew=(LinkList)calloc(1,sizeof(LinkNode));
        ListPNew->data=pNew;
        if(Tree==NULL){
            Tree=pNew;
            pHead=ListPNew;
            pTail=ListPNew;
            pCur=ListPNew;
        }else{
            pTail->next=ListPNew;
            pTail=pTail->next;
            if(pCur->data->LChild==NULL){
                pCur->data->LChild=pNew;
            }else if(pCur->data->RChild==NULL){
                pCur->data->RChild=pNew;
                pCur=pCur->next;
            }
        }
    }
}

void preorder_traversal(BiTree Tree) {
    if(Tree!=NULL) {
        printf("%c", Tree->data);
        preorder_traversal(Tree->LChild);
        preorder_traversal(Tree->RChild);
    }
}

void intermediate_traversal(BiTree Tree){
    if(Tree!=NULL){
        intermediate_traversal(Tree->LChild);
        printf("%c", Tree->data);
        intermediate_traversal(Tree->RChild);
    }
}

void post_order_traversal(BiTree Tree){
    if(Tree!=NULL){
        post_order_traversal(Tree->LChild);
        post_order_traversal(Tree->RChild);
        printf("%c", Tree->data);
    }
}

void level_traversal(BiTree Tree){
    Queue Q;
    init_queue(Q);
    BiTree p;
    en_queue(Q,Tree);
    while(!is_empty(Q)){
        out_queue(Q,p);
        putchar(p->data);
        if(p->LChild!=NULL){
            en_queue(Q,p->LChild);
        }
        if(p->RChild!=NULL){
            en_queue(Q,p->RChild);
        }
    }
}