#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

// Function to find Height of a BTree
int findHeigthBTree(BTreeNode* root)
{
    if (root == NULL) {
        return 0;
    }
    int leftHeigth = findHeigthBTree(root->left);
    int rightHeigth = findHeigthBTree(root->right);
    if (leftHeigth > rightHeigth)
    {
       return (leftHeigth + 1);
    } else
    {
        return (rightHeigth + 1);
    }
}

