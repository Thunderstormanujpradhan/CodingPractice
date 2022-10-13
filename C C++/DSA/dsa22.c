// Write a function to search an element in an arraylist and deletethat
// element in that arraylist (You need to create the arraylist inside the structure) .
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
void searchDelete(node **head, int value, int pos)
{   int k,i;
    node* prev = *head;
    node* ptr = *head;
    node* p;
    for(i=0; i<pos; i++)
    {
        if(value == prev->data)
        {
            printf("Value finded at %d position ",i);
            break;
        }
        else{
            prev = prev->next;
        }
    }
    if(i == 0 )
    {
        *head = ptr->next;
        free(ptr);
        return;
    }
    else{
         
        for(int j = 1; j<pos; j++)
        {
           if(i==j)
           {
              p = ptr;
              ptr = ptr->next;
              p->next = ptr->next;
              free(ptr);
              return;
           }
           else{
            ptr = ptr->next;
           }
        }

    }
}
void printdata(node* head)
{   printf("List after the searched element are ");
    while(head != NULL)
    {  
        printf("%d ",head->data);
        head = head->next;
    }
}    
    

    

int main()
{
    int n, value;
    node* head = NULL;
    node* ptr;
    printf("Enter the size of a list : ");
    scanf("%d",&n);
    printf("Enter the elements to be inserted : ");
    for(int i = 0; i<n; i++)
    {
        node* curr = malloc(sizeof(node));
        curr->next = NULL;
        scanf("%d",&curr->data);
        if(head == NULL)
        {
            head = curr;
            ptr = curr;
        }
        else{
            ptr->next = curr;
            ptr = curr;
        }
    }
    printf("Enter the value to be searched and deleted : ");
    scanf("%d",&value);
    searchDelete(&head, value, n);
    printf("\n");
    printdata(head);

}