#include<stdio.h>
#include<string.h>
int main()
{
    char d[100000];
    int i;
    printf("Enter num-char ");
    gets(d);
    strrev(d);
    printf("%s",d);
}