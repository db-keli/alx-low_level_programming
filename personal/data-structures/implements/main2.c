#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
  int data;
  struct Node* next;
}Node;

Node* head;
Node* Insert(Node* head, int data);
Node* Print(Node* head);
void Delete(int n);

int main()
{
  head = NULL;
  Insert(head, 2);
  Insert(head, 4);
  Insert(head, 6);
  Insert(head, 5);
  
  Print(head);
  //int n;
  //printf("Enter A position\n");
  //scanf("%d", n);
  //Delete(n);
  //Print();
  return 0;
}

Node* Insert(Node* head, int data)
{
  Node * temp = malloc(sizeof(Node));

  temp -> data = data;
  temp -> next = NULL;

  Node * curr = head;
  while (curr -> next != NULL)
  {
    curr = curr -> next;
  }

  curr -> next = temp;
  return head;
}

Node* Print(Node* head){
  Node* curr = head;

  while (curr -> next != NULL){
    printf("%d\n", curr -> data);
    curr = curr -> next;
  }
  return head;
}
