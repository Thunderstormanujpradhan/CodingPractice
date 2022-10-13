//Recursion 
#include<stdio.h>

int fun(int n)
{
    if(n==1)
    return 1;

    else
    return 1+fun(n-1);
}

int main()
{
    int n;
    printf("Enter the nth term : ");
    scanf("%d",&n);
    printf("Sum of nth term is %d",fun(n));
}