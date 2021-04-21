#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//structure prototypes
struct Node
{
    int data;
    struct Node* next;
};

typedef struct node Node;
struct node {
    int data;
    Node* next;
};

//functions
Node* InsertNth(Node* head, int data, int position);

void push(struct Node** head_ref, int new_data);

int count(struct Node* head, int search_for);

void deleteList(struct Node** head_ref);

void MoveNode(struct Node** destRef, struct Node** sourceRef);

//Not part of project requirements but useful for function testing
void printList(struct Node* head);

void recursiveReverse(struct Node* head, struct Node** headRef);

int pop(struct Node** headRef);
