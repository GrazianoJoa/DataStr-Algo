#include <stdio.h>
#include <stdlib.h>
#include "tree.c"
#include "treeEx.c"

int main()
{
    BTreeNode* root = newBTreeNode(1);
    root->left = newBTreeNode(2);
    root->right = newBTreeNode(3);
    root->left->left = newBTreeNode(4);
    root->left->right = newBTreeNode(5);
    root->right->left = newBTreeNode(6);
    root->right->right = newBTreeNode(7);

    printf("%d", findHeigthBTree(root));
}
