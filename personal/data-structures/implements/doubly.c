#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev; 
}Node;

Node* head;

Node* GetNewNode(int data){
    Node* NewNode = (Node*)malloc(sizeof(Node));

    NewNode -> data = data;
    NewNode -> prev = NULL;
    NewNode -> next = NULL;

    return NewNode; 
}

void InsertAtHead(int data){
    Node* NewNode = GetNewNode(data);

    if (head == NULL){
        head = NewNode;
        return; 
    }

    head -> prev = NewNode;
    NewNode -> next = head;
    head = NewNode;  
}

void Print(){
    Node* temp = head;
    while (temp -> next != NULL){
        printf("%d", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

void ReversePrint(){
    Node* temp = head;
    while (temp -> next != NULL)
    {
       temp = temp -> next; 
    }

    printf("Reverse:\n");
    while (temp -> prev != NULL)
    {
        printf("%d", temp -> data);
        temp = temp -> prev;
    }
    
}

int main(){
    head = NULL;

    InsertAtHead(2);
    Print();
    ReversePrint();
    InsertAtHead(4);
    Print();
    ReversePrint();
    InsertAtHead(6);
    Print();
    ReversePrint();

    return 0;
}