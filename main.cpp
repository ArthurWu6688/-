#include "tree.h"

int main(){
    BiTree Tree=NULL;
    build_tree(Tree);
    printf("-------------ǰ�����-------------\n");
    preorder_traversal(Tree);
    printf("\n-------------�������-------------\n");
    intermediate_traversal(Tree);
    printf("\n-------------�������-------------\n");
    post_order_traversal(Tree);
    printf("\n-------------�������-------------\n");
    level_traversal(Tree);

    return 0;
}