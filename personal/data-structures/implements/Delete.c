#include "main.h"

Node* Delete(Node* root, int position){
    Node* temp = root;

    for (int i = 0; position -1; i++){
        temp = temp -> next;
    }

    temp -> next = temp -> next ->next;

    free(temp -> next);
}