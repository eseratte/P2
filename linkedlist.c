#include "linkedlist.h"

Node* InsertNth(Node* head, int data, int position)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;

    if (head == NULL) {
        return newNode;
    }

    if (position == 0) {
        newNode->next = head;
        return newNode;
    }

    Node* currentNode = head;
    while (position - 1 > 0) {
        currentNode = currentNode->next;
        position--;
    }

    newNode->next = currentNode->next;
    currentNode->next = newNode;

    return head;
}

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int count(struct Node* head, int search_for)
{
    struct Node* current = head;
    int count = 0;
    while (current != NULL) {
        if (current->data == search_for)
            count++;
        current = current->next;
    }
    return count;
}

void deleteList(struct Node** head_ref)
{
    struct Node* current = *head_ref;
    struct Node* next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *head_ref = NULL;
}

void MoveNode(struct Node** destRef, struct Node** sourceRef)
{
    struct Node* newNode = *sourceRef;
    assert(newNode != NULL);
    *sourceRef = newNode->next;
    newNode->next = *destRef;
    *destRef = newNode;
}

//Not part of project requirements but useful for function testing
void printList(struct Node* head)
{
    struct Node* ptr = head;
    while (ptr)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void recursiveReverse(struct Node* head, struct Node** headRef)
{
    struct Node* first;
    struct Node* rest;
    if (head == NULL) {
        return;
    }
    first = head;
    rest = first->next;
    if (rest == NULL)
    {
        *headRef = first;
        return;
    }
    recursiveReverse(rest, headRef);
    rest->next = first;
    first->next = NULL;
}

int pop(struct Node** headRef)
{
    if (*headRef == NULL) {
        return -1;
    }
    struct Node* head = *headRef;
    int result = head->data;
    (*headRef) = (*headRef)->next;
    free(head);
    return result;
}