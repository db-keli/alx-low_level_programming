#include "main.h"

int main()
{
    Node* root = malloc(sizeof(Node));
    root -> data = 4;
    root -> next = malloc(sizeof(Node));
    root -> next -> data = 7;
    root -> next -> next = NULL;

    root = insert_beginning(root, 6);
    root = insert_end(root, 89);

    traverse(root);

    free(root -> next);
    free(root);

    return 0;
}