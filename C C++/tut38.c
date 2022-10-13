#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    int l1,l2,i;
    gets(a);
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    printf("%d  %d\n",l1,l2);
    printf("%s%s\n",a,b);
    i=a[0];
    a[0]=b[0];
    b[0]=i;
    printf("%s %s",a,b);
   }