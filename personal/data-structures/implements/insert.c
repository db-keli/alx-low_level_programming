#include "main.h"

Node* insert(Node* root, int value, int position)
{
    Node* temp = malloc(sizeof(Node));
    temp -> data = value;
    temp -> next = NULL;

    if (position == 1){
        temp -> next = root;
        root = temp;
        return 0;
    }

    Node* temp2 = root;
    for (int i = 0; position -2; i++){
        temp2 = temp2 ->next;
    }

    temp -> next = temp2 -> next;
    temp2 -> next = temp; 
}