#include <stdio.h>
#include <stdlib.h>
#include "BSTree.h"

BSTNode* newBSTNode(int data)
{
    BSTNode* newNode = malloc(sizeof(BSTNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

BSTNode* getMinValueNode(BSTNode* node)
{
    BSTNode* tmp = node;
    while (tmp->left != NULL)
    {
        tmp = tmp->left;
    }
    return tmp;
}

bool findBST(BSTNode* root, int data)
{
    if (root == NULL) {
        return false;
    } else {
        if (data == root->data) {
            return true;
        } else if (data > root->data) {
            return findBST(root->right, data);
        } else {
            return findBST(root->left, data);
        }
    }
}

BSTNode* insertBST(BSTNode* root, int data)
{
    if (root == NULL) {
        root = newBSTNode(data);
    }
    if (data < root->data) {
        root->left = insertBST(root->left, data);
    } else if (data > root->data) {
        root->right = insertBST(root->right, data);
    }
    return root;
}

BSTNode* deleteBST(BSTNode* root, int data)
{
    if (root == NULL) {
        return root;
    }
    if (data < root->data) {
        root->left = deleteBST(root->left, data);
    } else if (data > root->data) {
        root->right = deleteBST(root->right, data);
    } else {
        // One or Zero Childs
        if ((root->left == NULL ) && (root->right == NULL)) {
           free(root);
           return NULL;
        } else if (root->left == NULL) {
            BSTNode* tmp = root->right;
            free(root);
            return tmp;
        } else if (root->right == NULL) {
            BSTNode* tmp = root->left;
            free(root);
            return tmp;
        } else {
        // Two Childs
            BSTNode* tmp = getMinValueNode(root->right);
            root->data = tmp->data;
            root->right = deleteBST(root->right, tmp->data);
        }
    }
    return root;
}
void inOrderPrintBST(BSTNode* root)
{
    if (root != NULL) {
        inOrderPrintBST(root->left);
        printf("%d ", root->data);
        inOrderPrintBST(root->right);
    }
}

void preOrderPrintBST(BSTNode* root)
{
    if (root != NULL) {
        printf("%d ", root->data);
        preOrderPrintBST(root->left);
        preOrderPrintBST(root->right);
    }
}

void postOrderPrintBST(BSTNode* root)
{
    if (root != NULL) {
        postOrderPrintBST(root->left);
        postOrderPrintBST(root->right);
        printf("%d ", root->data);
    }
}

/*
    Traverse the whole Tree until p and q are in the subtree, then return the subtree
*/

BSTNode* LowestCommonAncestor(BSTNode* root, int n1, int n2)
{
    if (root == NULL ) {
        return root;
    }
    if ((n1 > root->data) && (n2 > root->data)) {
        return LowestCommonAncestor(root->right, n1, n2);
    }
    if ((n1 < root->data) && (n2 < root->data)) {
        return LowestCommonAncestor(root->left, n1, n2);
    }
    return root;
}
