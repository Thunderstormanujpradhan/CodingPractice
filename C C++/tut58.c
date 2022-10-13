#include<stdio.h>
int main()
{
    char c[]= "anuj";
    char *c1;
    c1=c;
    c=c+1;
    printf("%s",c);
}