#include "main.h"

Node* insert_end(Node*  root, int value)
{
    Node* temp = malloc(sizeof(Node));

    temp -> data = value;
    temp -> next = NULL;

    Node* curr = root;
    while(curr -> next != NULL)
    {
        curr = curr -> next;
    }

    curr -> next = temp;
    
    return root;
}