//Printing words in vertical manner
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int l,i;
    printf("Enter the string ");
    fgets(a,100,stdin);
   l=strlen(a);
   for(i=0;i<=l;i++)
   { if(a[i]!=32)
    printf("%c",a[i]);
    else
    printf("\n");
    }
 return 0;

}