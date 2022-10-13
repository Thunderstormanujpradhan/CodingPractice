#include<stdio.h>
#include<stdlib.h>
struct Node{      //Self referecial structure 
    int data;
    struct Node* next;
};
struct Node* head = NULL;     //Globally declared
struct Node* tail = NULL;
int main()
{    struct Node* curr = NULL;  //Use to remember the address of the node
    for(int i=0;i<4;i++)
    {
         curr = (struct Node*)malloc(sizeof(struct Node)); // It stores  latest node address
         scanf("%d",&curr->data);
         curr->next =  NULL;
         if(head==NULL)
         {
            tail=head=curr;
         }
         else{
            tail->next = curr;  //Forming the connection between link
            tail = curr;       //Updating the value of tail w.r.t tail
         }
    }
    printf("\n");
    curr = head;
    while(curr!=NULL)
    {
        printf("%d ",curr->data);
        curr = curr->next;
    }
}