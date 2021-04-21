#include<stdio.h>
#include<stdlib.h>
#include "linkedlist.h"

int main() {

    struct Node* head = NULL;
//PUSH
    printf("Pushing to list...\n");
    push(&head, 1);
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 5);
    printf("List is: ");
    printList(head);
//POP
    printf("Popping from list...\n");
    pop(&head);
    printf("List is: ");
    printList(head);
//COUNT
    printf("Counting list...\n");
    printf("Count of 1 in list is %d\n", count(head, 1));
    printf("Count of 2 in list is %d\n", count(head, 2));
    printf("Count of 3 in list is %d\n", count(head, 3));
//REVERSE
    printf("Reversing list...\n");
    recursiveReverse(head, &head);
    printf("List is: ");
    printList(head);
//INSERT
    printf("Inserting into list...\n");
    InsertNth(head, 5, 4);
    printf("List is: ");
    printList(head);
//DELETE
    printf("Deleting list...\n");
    deleteList(&head);
    printf("List is: ");
    printList(head);
//MOVE
    struct Node* a = NULL;
    struct Node* b = NULL;
    //creating list a
    printf("Pushing to list a...\n");
    push(&a, 4);
    push(&a, 3);
    push(&a, 2);
    printf("List a is: ");
    printList(a);
    //creating list b
    printf("Pushing to list b...\n");
    push(&b, 6);
    push(&b, 5);
    push(&b, 1);
    printf("List b is: ");
    printList(b);
    //moving list items
    printf("Moving list b item to list a...\n");
    MoveNode(&a, &b);
    printf("List a is: ");
    printList(a);
    printf("List b is: ");
    printList(b);

    return 0;
}