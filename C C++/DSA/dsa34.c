// . Given a sorted linked list, delete all duplicates such that each element appear onlyonce. For example, Given 1->1->2, return 1->2. Given 1->1->2->3->3, return 1->2->3. 
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;

void create(node **head, int size)
{
    node *ptr, *curr;
    printf("Enter the elements of the list : ");
    for(int i = 0; i<size; i++)
    {
        curr = malloc(sizeof(node));
        curr->next = NULL;
        scanf("%d",&curr->data);
        if(*head == NULL)
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

void Remove(node *head, int size)
{
    node *prev = head;
    if (head == NULL)
    {
        printf("Your list has not been created ");
        return;
    }
    while (prev->next != NULL)
    {
        if (prev->data == prev->next->data)
        {
            prev->next = prev->next->next;
           
        }
        else
        {
            prev = prev->next;
        }
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
    int size;
    printf("Enter the size of list : ");
    scanf("%d",&size);
    node *head = NULL;
    create(&head, size);
    printf("List before removing the duplicacy : ");
    printData(head);
    Remove(head, size);
    printf("List after removing the duplicacy : ");
    printData(head);
}