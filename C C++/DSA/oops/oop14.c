// WAP to print the calendar of that month by accepting month number and name of the first
// day of the month from user.
#include<stdio.h>
void calender(int n, int m)
{ int i,j=1;

    for(i=0;i<m-1;i++)
    {
        printf("\t");
    }
    for(i=m-1;i<m+n-1;i++)
    {
        printf("%d\t",j);
        j++;
        if((i+1)%7==0)
        printf("\n");
    }
    
    
  }


int main()
{
    int n,m;
    printf("Enter month no. ");
    scanf("%d",&n);
    int a[n];
    printf("Enter first day no. of month ");
    scanf("%d",&m);
    calender(n,m);
    

}