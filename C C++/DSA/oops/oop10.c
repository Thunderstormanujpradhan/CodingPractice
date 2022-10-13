//Convert a Person’s Name in Abbreviated form.
#include<stdio.h>
int main()
{
    char f1[30];
    char m1[30];
    char l1[30];
    int flag=1,n;
    printf("Press 1, if you have middle name else press 0: ");
    scanf("%d",&n);
    printf("Enter your name ");
    if(flag==n)
    {
      scanf("%s%s%s",f1,m1,l1);
      printf("Abbrevated name is %c . %c %s",f1[0],m1[0],l1);
    }
    if(flag!=n)
    {
        scanf("%s %s",f1,l1);
      printf("Abbrevated name is %c %s",f1[0],l1); 
    }
}