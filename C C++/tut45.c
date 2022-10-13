#include<stdio.h>
int main()
{
    int a=10, b=9,c;
    int *p, *q;
    p=&a;
     printf("%d\n",p);

    q=&b;
    c=*q;
    *p=20;
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d",c);
}