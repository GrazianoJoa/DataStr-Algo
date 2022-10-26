#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

typedef struct BTreeNode
{
    int data;
    struct BTreeNode *left;
    struct BTreeNode *right;
} BTreeNode;

BTreeNode* newBTreeNode(int data);

// [Tree Traversals]

// PreOrder Traversal (DLR)
void RecPreOrder(BTreeNode *root);

// InOrder Traversal (LDR)
void RecInOrder(BTreeNode *root);

// PostOrder Traversal (LRD)
void RecPostOrder (BTreeNode *root);

// Level Order Traversal (Breadth First Traversal)



#endif // TREE_H_INCLUDED
