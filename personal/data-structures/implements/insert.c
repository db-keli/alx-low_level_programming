#include "main.h"

Node* insert(Node* root, int value, int position)
{
    Node* temp = malloc(sizeof(Node));
    temp -> data = value;
    temp -> next = NULL;

    if (position == 1){
        temp -> next = root;
        root = temp;
        return;
    }
    
    return root;
}