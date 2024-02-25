#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* traverse(Node* root);
Node* insert_beginning(Node* root, int value);
Node* insert_end(Node* root, int value);
Node* insert(Node* root, int value, int position);
