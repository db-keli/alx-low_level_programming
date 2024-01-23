#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node {
    int data;
    struct Node *next;
}Node;

int main(int argc, char **argv)
{
    Node *root = malloc(sizeof(struct Node));
    root->data = 3;
    root->next = malloc(sizeof(struct Node));
    root->next->data = 87;
    root->next->next = NULL;

    Node *curr = root;
    while(curr != NULL){
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    free(root->next);
    free(root);
    
    return 0;
}