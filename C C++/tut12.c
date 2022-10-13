//Finding Factorial
#include<stdio.h>
int main()
{
    int a,b=1,c;
    printf("Enter the factorial no.");
    scanf("%d",&a);
    while(a>0)
    {                 
       b=b*a;
       a--;
    }
    printf("%d",b);

}