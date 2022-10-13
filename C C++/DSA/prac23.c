//Creating, deleting, inserting of nodes
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
      int data;
      struct node* prev;
      struct node* next;
}node;
void createList(node* head, int n)
{
    for(int i=0; i<n; i++)
    {
        
    }
}
int main()
{
    int n;
    printf("Enter the size of the linked list : ");
    scanf("%d",&n);
    node* head = NULL;
    createList(head, n);
}