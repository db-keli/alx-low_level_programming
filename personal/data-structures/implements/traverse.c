#include "main.h"

Node* traverse(Node* root){
    Node* temp;
    temp = root;
    while(temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp -> next;
    }
    return root;

}