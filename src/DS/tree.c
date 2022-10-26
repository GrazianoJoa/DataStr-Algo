#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

BTreeNode* newBTreeNode(int data)
{
    BTreeNode* newNode = (BTreeNode*)malloc(sizeof(BTreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return(newNode);
}

// [Tree Traversals]

void RecPreOrder(BTreeNode *root)
{
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    RecPreOrder(root->left);
    RecPreOrder(root->right);
}

void RecInOrder(BTreeNode *root)
{
    if (root == NULL) {
        return;
    }
    RecInOrder(root->left);
    printf("%d ", root->data);
    RecInOrder(root->right);
}

void RecPostOrder (BTreeNode *root)
{
    if (root == NULL) {
        return;
    }
    RecPostOrder(root->left);
    RecPostOrder(root->right);
    printf("%d ", root->data);
}
