// Remove repeated element in a list.
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
void Remove(node *head)
{
    node *curr = head;
    node *prev = head;
    while (curr != NULL)
    {
        prev = curr;
        node *temp = curr->next;
        while (temp != NULL)
        {
            if (temp->data == curr->data)
            {
                prev->next = temp->next;
                free(temp);
                temp = prev;
            }
            
            prev = temp;
            temp = temp->next;
        }
        curr = curr->next;
    }
}
void printData(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    node *head = NULL;
    node *ptr;
    int size;
    printf("Enter the size of the list : ");
    scanf("%d", &size);
    printf("Enter the elements of the list : ");
    for (int i = 0; i < size; i++)
    {
        node *curr = malloc(sizeof(node));
        curr->next = NULL;
        scanf("%d", &curr->data);
        if (head == NULL)
        {
            head = curr;
            ptr = curr;
        }
        else
        {
            ptr->next = curr;
            ptr = curr;
        }
    }
    Remove(head);
    printData(head);
}
