//deletion of linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
   int data;
   struct Node* next;
}Node;
int main()
{
    Node* head = (Node*)malloc(sizeof(Node));
    Node* second = (Node*)malloc(sizeof(Node));
    Node* third = (Node*)malloc(sizeof(Node));
    head->next = NULL;
    second->next = NULL;
    third->next = NULL;
    head->data = 1;
    second->data = 2;
    third->data = 3;
    head->next = second;
    second->next = third;
    // while(head!=NULL)
    // {
    //     printf("%d",head->data);
    //     head = head->next;
    // }
    //Deleting a node
    head->next = third;
    free(second);
    while(head!=NULL)
    {
        printf("%d",head->data);
        head = head->next;
    }
}