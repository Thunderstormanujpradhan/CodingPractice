// WAP to take the input of users name and apply the following operation on it :-
// 1. Find the number of characters.
// 2. Find number of words.
// 3. Find the number of vowels.
// 4. Display the characters at odd position only.
// 5. Find the number of duplicate characters and its number of occurence.
// 6. Remove the odd position element.

#include<stdio.h>
#include<stdlib.h>

typedef struct node{

    char data;
    struct node *next;
}node;

void create(node **head)
{
    node *curr, *ptr;
    printf("Enter the string : ");

    char c;
    while((c = getchar()) != '\n')
    {
       curr = malloc(sizeof(node));
       curr->next = NULL;
       curr->data = c;
    
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

void character(node *head)
{
    int count = 0;
    while(head != NULL)
    {
        count++;
        head = head->next;
    }
    printf("Number of characters are : %d",count);
}

void vowels(node *head)
{
    int count = 0;
    while(head != NULL)
    {
        if(head->data =='a' ||head->data =='e' ||head->data =='i' ||head->data =='o' ||head->data =='u' ||head->data =='A' ||head->data =='E' ||head->data =='I' ||head->data =='O' ||head->data =='U')
        count++;
        head = head->next;
    }
    printf("\nNumber of vowels  are %d",count);
}

void words(node *head)
{
    int count = 0;
    while(head != NULL)
    {
        if(head->data == ' ')
        count++;
        head = head->next;
    }
    printf("\nNumber of words are %d",count+1); 
}

void oddposition(node *head)
{
    printf("\n");
    while(head != NULL)
    {
        printf("%c",head->data);//Starting from 0th index
        head = head->next == NULL ? NULL : head->next->next;
    }
    printf("\n");
}

void duplicate(node *head)
{
    int count = 0;
   
    int freq[128] = {0};

    node *ptr = head;

    while (ptr != NULL) {
        freq[ptr->data]++;
        ptr = ptr->next;
    }

    for (int i = 0; i < 128; i++) {
        if (freq[i] > 1) {printf("'%c'\t%d\n", i, freq[i]); count++;}
    }

    if (count==0) printf("No duplicate\n");
}


int main()
{
    node *head, *ptr;
    head = NULL;
    create(&head);
    int n;
    printf("Press 1 : Find the number of characters.\nPress 2 : Find number of words.\nPress 3 : Find the number of vowels.\nPress 4 : Display the characters at odd position only.\nPress 5 : Find the number of duplicate characters and its number of occurence.\nPress 6 : Exit the loop");
    printf("\n");
    do
    {
    printf("\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1 : character(head);
                 break;
        case 2 : words(head);
                 break;
        case 3 : vowels(head);
                 break;
        case 4 : oddposition(head);
                 break;
        case 5 : duplicate(head);
                 break;  
        case 6: printf("exiting..."); break;
        default : printf("Wrong number choosen"); 
                  break;      
    }
    }while(n != 6);
    return 0;
    

}
