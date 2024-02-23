#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* head;

void insert_end(Node **root, int value){
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL){
        exit(1);
    }
    new_node->next = NULL;
    new_node->data = value;
    
    if(root == NULL){
        *root = new_node;
    }

    Node *curr = *root;
    while(curr->next != NULL ){
        curr = curr->next;
    }
    curr->next = new_node;
}

void insert_beginning(Node* root, int value){
    Node* temp = (Node*)malloc(sizeof(Node));

    temp -> data = value;
    temp -> next = NULL;

    if( root == NULL) temp -> next = root;
    root = temp;
}

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
    root->next->next = NULL;
    
    insert_end(&root, 4);

    for(Node *curr = root; curr != NULL; curr = curr->next){
        printf("%d\n", curr->data);
    }
}
