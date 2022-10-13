//Using goto function
#include<stdio.h>
int main()
{
    int a=1;
    x:printf("%d\t",a);
    a=a+1;
    while(a<=100)
    goto x;
    return 0;
}