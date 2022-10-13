//creating doubly linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    struct node* prev;
    int data;
    struct node* next;
}node;
void printdata( node* head)
{
    node* ptr1 = head;
    while(ptr1 != NULL)
    {
        printf("%d\n",ptr1->data);
        ptr1 = ptr1->next;
    }
}
int main()
{   int n;
    printf("Enter the size of link list : ");
    scanf("%d",&n);
    node* head = NULL;
    node* ptr;
    for(int i=0; i<n; i++)
    {
        node* curr = malloc(sizeof(node));
        curr->next = NULL;
        curr->prev = NULL;
        curr->data = rand()%100+10;
        if(head == NULL)
        {
            head = curr;
            ptr = curr;
        }
        else{
            ptr->next = curr;
            curr->prev = ptr;
            ptr = curr;

        }
        
        
    }
    printdata(head);


}