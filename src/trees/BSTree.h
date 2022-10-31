#ifndef BSTREE_H_INCLUDED
#define BSTREE_H_INCLUDED

#include <stdbool.h>

typedef struct BSTNode
{
    int data;
    struct BSTNode *left, *right;
} BSTNode;

// [ Utils ]

BSTNode* newBSTNode(int data);
BSTNode* getMinValueNode(BSTNode* node);

// [ Basic Operations ]

bool findBST(BSTNode* root, int data);
BSTNode* insertBST(BSTNode* root, int data);
BSTNode* deleteBST(BSTNode* root, int data);

// [ Tree Traversals ]

void preOrderPrintBST(BSTNode* root);
void inOrderPrintBST(BSTNode* root);
void postOrderPrintBST(BSTNode* root);

// [ Other Operations ]

BSTNode* LowestCommonAncestor(BSTNode* root, int n1, int n2);






#endif // BSTREE_H_INCLUDED
