//Find the number of duplicate character and its number of occurence
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;

}node;

int main()
{
    node *head, *ptr, *curr;
    head = NULL;
    int nT;
    printf("Enter total number of character : ");
    scanf("%d",&nT);
    printf("Enter the character : ");
    for(int i = 0; i<nT; i++)
    {
        curr = malloc(sizeof(node));
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
}