#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;


int main(int argc, char* argv[])
{
    Node root, elem2;
    root.data = 1;
    root.next = malloc(sizeof(Node));
    root.next->data = 4;
    root.next->next = malloc(sizeof(Node));
    root.next->next->data = 6;
    root.next->next->next = NULL ;

    // printf("First element: %d\n", root.data);
    // printf("Second element: %d\n", root.next->data);
    Node* curr = &root;

    while ( curr != NULL )
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    free(root.next->next);
    free(root.next);

    return 0;
}