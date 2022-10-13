//WAP to do the following operation on sparse matrix represented by linked list.
//Addition 
//Multiplication
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int r; //Row
    int c; //Column
    int v; //Value
    struct node* next;
}node;

void create(node** head)
{
    printf("Enter the total number of rows, columns and non zero element : ");
    *head = malloc(sizeof(node));
    scanf("%d %d %d",&(*head)->r, &(*head)->c, &(*head)->v);
    (*head)->next = NULL;

    node* ptr = *head;
    node* curr;

    printf("Enter the value of row, column and value : ");
    for(int i = 0; i<(*head)->v; i++)
    {
        curr = malloc(sizeof(node));
        scanf("%d %d %d",&curr->r, &curr->c, &curr->v);
        curr->next = NULL;
        ptr->next = curr;
        ptr = curr;


    }
}

void printdata(node *head)
{
    node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d %d %d ",ptr->r, ptr->c, ptr->v);
        ptr = ptr->next;
        if(ptr != NULL)
        printf("->");
    }
}


int main()
{
    node *head1, *head2;
    create(&head1);
    create(&head2);
    printf("Spare elements of 1st matrix is : ");
    printdata(head1);
    printf("\n");
    printf("Spare elements of 1st matrix is : ");
    printdata(head2);
}