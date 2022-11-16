#include "tree.h"

int main(){
    BiTree Tree=NULL;
    build_tree(Tree);
    printf("-------------前序遍历-------------\n");
    preorder_traversal(Tree);
    printf("\n-------------中序遍历-------------\n");
    intermediate_traversal(Tree);
    printf("\n-------------后序遍历-------------\n");
    post_order_traversal(Tree);
    printf("\n-------------层序遍历-------------\n");
    level_traversal(Tree);

    return 0;
}