#include<stdio.h>
void sum(int a,int b)
{  
    // scanf("%d %d",&a,&b);
    printf("%d",a+b);
}
void sum(int a,int b);
int main()
{
    sum(4,3);
}