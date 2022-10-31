#ifndef SLINKEDLIST_H_INCLUDED
#define SLINKEDLIST_H_INCLUDED

typedef struct LnkListNode {
    int data;
    struct LnkListNode* next;
} LnkListNode;


// [ Utils ]
LnkListNode* newLnkListNode(int data);
void printLinkedList(LnkListNode* head);

// [ Operations ]
LnkListNode* appendLinkedList(LnkListNode** head, int data);



#endif // SLINKEDLIST_H_INCLUDED
