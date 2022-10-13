//Inserting node at middle
#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
      int data;
      struct Node* next;
}Node;
int main()
{
     Node* head = ( Node*)malloc(sizeof(Node)); //creating node dynamically.
     Node* second = (Node*)malloc(sizeof(Node));
     Node* third = (Node*)malloc(sizeof(Node));
     head->next = NULL;
     second->next = NULL;
     third->next = NULL;
     head->data = 3; //Initializing the the data in node
     second->data = 4;
     third->data = 5;
     head->next = second;//Creating link between nodes.
     second->next = third;
    //  while(head!=NULL)
    //  {
    //     printf("%d ",head->data);
    //     head=head->next;
    //  }
//Inserting a new node in the middle of the list.

Node* new_node = (Node*)malloc(sizeof(Node));
new_node->next = NULL;
new_node->data = 69;
second->next = new_node;
new_node->next = third;
while(head!=NULL)
{
    printf("%d ",head->data);
    head = head->next;
}

}