#include "main.h"

Node* reverse(Node* root){
    Node *current, *prev, *next;
    current = root;
    prev = NULL;

    while (current != NULL){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }

    root = prev;
    return root;
} 