//
// Created by 93539 on 2022/11/16.
//

#ifndef TREE1_TREE_H
#define TREE1_TREE_H

#include "standard_library.h"

typedef char BiElemType;
typedef struct BiTNode{
    BiElemType data;
    struct BiTNode *LChild;
    struct BiTNode *RChild;
}BiTNode,*BiTree;

void build_tree(BiTree& Tree);
void preorder_traversal(BiTree Tree);
void intermediate_traversal(BiTree Tree);
void post_order_traversal(BiTree Tree);
void level_traversal(BiTree Tree);

#endif //TREE1_TREE_H
