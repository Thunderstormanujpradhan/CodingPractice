//Reversing the single linekd list

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

void create(node **head, int size)
{
    printf("Enter the elements of the linked list : ");
    node *ptr, *curr;
    for(int i = 0; i<size; i++)
    {
        curr = malloc(sizeof(node));
        curr->next = NULL;
        scanf("%d",&curr->data);
        if (*head == NULL)
        {
            *head = curr;
            ptr = curr;
        }
        else{
            ptr->next = curr;
            ptr = curr;
        }
    }
}

void reverse(node **head, int size)
{
    node *ptr, *initial, *prev;
    initial = prev = ptr = *head;
    
    for(int i = 0; i<size-1; i++)
    {

        ptr = ptr->next;
    }
    *head = ptr;

    for(int i = 0; i<size-1; i++)
    {
       for(prev = initial; prev->next != ptr; prev = prev->next);
       ptr->next = prev;
       if(prev == initial)
       {
        ptr->next = prev;
        prev->next = NULL;
        break;
       }
       ptr = prev;
    }

    
}

void printData(node *head)
{
    node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    node *head = NULL;
    int size;
    printf("Enter the size of the list : ");
    scanf("%d",&size);
    create(&head, size);
    printf("Before reversing the string : ");
    printData(head);
    reverse(&head, size);
    printf("\nAfter reversing the string : ");
    printData(head);
}
