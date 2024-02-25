#include "main.h"

Node* insert_beginning( Node* root, int value)
{
    Node* temp = malloc(sizeof(Node));
    temp -> data = value;
    temp -> next = NULL;

    temp -> next = root;

    root = temp;

    return root;
}