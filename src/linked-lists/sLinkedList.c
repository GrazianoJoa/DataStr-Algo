#include <stdio.h>
#include <stdlib.h>
#include "sLinkedList.h"

LnkListNode* newLnkListNode(int data)
{
   LnkListNode* newNode = malloc(sizeof(LnkListNode));
   newNode->data = data;
   newNode->next = NULL;
   return newNode;
}

void appendLinkedList(LnkListNode** head, int data)
{
}

/*
    Iterative Aproach:
     While(head != null)
        prinf(...);
        head = head->next;
*/

void printLinkedList(LnkListNode* head)
{
    if (head != NULL) {
        printf("%d", head->data);
        printLinkedList(head->next);
    }
}
