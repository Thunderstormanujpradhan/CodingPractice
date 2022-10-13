//Creating a polynomial and adding it
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int coeff;
    int exp;
    struct node* next;
}node;


void create(node **h)
{
    node* curr, *ptr;
    int nT;
    printf("Enter the number of terms : ");
    scanf("%d",&nT); //nT = no. of terms
    printf("Enter the Cefficient and exponent of polynomial : ");
    for(int i = 0; i<nT; i++)
    {
        curr = malloc(sizeof(node));
        curr->next = NULL;
        scanf("%d%d",&curr->coeff, &curr->exp);
        if(*h == NULL)
        {
            *h = curr;
            ptr = curr;
        }
        else{
            ptr->next = curr;
            ptr = curr;
        }
    }
}


void join(node **h1, node *h2)
{
    if(*h1 == NULL)
    {
        *h1 = h2;
    }
    else{
        node *ptr;
        for(ptr = *h1; ptr->next != NULL; ptr = ptr->next);
        ptr->next = h2;
    }
}


void simplify(node **h)
{
    node *ptr, *ptr1, *prev;
    ptr = *h;
    while(ptr != NULL) //ptr->next show segmentation error, when *h or   
                       // ptr is null as ptr->next doesn't exist                                
    {
      prev = ptr;
      ptr1 = ptr->next;    // ptr1 will be 1 step forward to ptr
      while(ptr1 != NULL)
      {
        if(ptr1->exp == ptr->exp)
        {
            ptr->coeff = ptr->coeff + ptr1->coeff;
            prev->next = ptr1->next;
            free(ptr1);
            ptr1 = prev; 
        }
        prev = ptr1; 
        ptr1 = ptr1->next;  //Checking each node
      }  



      ptr = ptr->next;
    }
}

void printdata(node *h)
{
    while(h!=NULL)
    {printf("%d %d   ",h->coeff,h->exp);
    h = h->next;}
}
int main()
{
    node* h1, *h2;
    h1 = h2 = NULL;
    create(&h1);
    create(&h2);
    join(&h1, h2);
    simplify(&h1); 
    printdata(h1); 
}