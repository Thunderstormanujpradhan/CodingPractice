// WAP to find the position of substring in a given string.
#include<stdio.h>
int main()
{
    char str1[50],str2[50];
    int i=0,j=0,k,l;
    printf("Enter the string : ");
    scanf("%[^\n]%*c",str1);
    printf("Enter the string to be searched : ");
    scanf("%[^\n]s",str2);

    while(str1[i]!='\0')
    i++;
    k=i;
    while(str2[j]!='\0')
    j++;
    l=j;
    i=0;j=0;
    
   for(i=0;i<k;i++)
   {  
      if(j==l)
      { printf("%d\n",i-j+1);
      break;
      }
      if(str1[i]==str2[j])
      {
        j++;
      }
      else
      {
        j=0;
      }

   }   
   if(j!=l)
   printf("No substring found"); 
          
}
