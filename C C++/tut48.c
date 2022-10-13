#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int *m=&a; 
    **q=25;
    printf("%d %d %d",a,p,p+2);
}