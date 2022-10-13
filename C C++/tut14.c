//To check prime no.
#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter the no. ");
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        if(a%i!=0)
       { printf("%d is a prime no.",a);
        break;}
        else
       { printf("%d not a prime no.",a);
        break;}
    }
     return 0;
}