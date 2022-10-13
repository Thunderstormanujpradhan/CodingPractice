// Count frequency of each character in a string.
#include<stdio.h>
int main()
{
    char str[50],c;
    int i,j=0,count=0;
    printf("Enter the string : ");
    scanf("%[^\n]%*c",str);
    while(str[j]!='\0')
    j++;
    for(c='a';c<='z';c++)
    {
        count=0;
        for(i=0;i<j;i++)
        {   if(c==str[i])
            count++;
        }
        if(count>0)
        printf("%c : %d\n",c,count);
    }


    

}