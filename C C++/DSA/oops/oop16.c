// WAP to replace all vowels from a string with its immediate consonant.
#include<stdio.h>
int main()
{
    char str[30];
    int i=0,j,k;
    printf("Enter the string ");
    scanf("%[^\n]s",str);
    while(str[i]!='\0')
    i++;
    k=i;
    i=0;
    for(i=0;i<k;i++)
    {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
        str[i]++;
        if(str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
        str[i]++;
        
    }
     //for(i=0;i<k;i++)
    printf("%s",str);

   
}