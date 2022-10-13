//Revrese the string
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,l;
    printf("Enter the string ");
    gets(s);
   l=strlen(s);
    //To reverse the string
    for(i=l;i>0;i--)
    printf("%c",s);
}