#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void insert_end(Node **root, int value);

int main(int argc, char* argv[])
{
    Node *root = malloc(sizeof(Node));
    if (root == NULL)
    {
        exit(2);
    }
    root->data = 23;
    root->next = malloc(sizeof(struct Node));
    root->next->data = 56;
    root->next->next->next = NULL;
    
    insert_end()

    for(Node *curr = root; curr != NULL; curr = curr->next){
        printf("%d\n", curr->data);
    }
}

void insert(Node *root, int value){
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL){
        exit(1);
    }
    new_node->next = NULL;
    new_node->data = value;
    
    Node *curr = new_node;
    while(curr!=NULL){
        curr = curr->next;
    }
    curr->next = new_node;
}