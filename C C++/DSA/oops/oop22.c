// Write a menu driven program (user defined functions ) for the following string
// operations:-

// a) Compare two strings.
// b) Toggle case of each character of a string.
// c) Reverse order of words in a given string.
// d) Remove all repeated characters from a given string.
#include<stdio.h>
#include<string.h>
int main()
{   int n,m,i=0,j,k,l,temp,flag=0;
    char str1[50],str2[50];
    printf("Enter the 1st string : ");
    scanf("%[^\n]%*c",str1);
    while(str1[i]!='\0')
    i++;
    j=i;
    i=0;
    printf("Enter the 2nd string : ");
    scanf("%[^\n]%*c",str2);
    while(str2[i]!='\0')
    i++;
    k=i;
    i=0;
    printf("1. Compare two strings\n2. Toggle case of each character of a string.\n3. Reverse order of words in a given string.\n4. Remove all repeated characters from a given string.");
    printf("\nEnter your choice : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1 : m=strcmp(str1,str2);
                 if(m==0)
                 printf("Both the strings are same ");
                 else 
                 printf("Both the strings are different ");
                 break;
        case 2 : for(i=0;str1[i]!='\0';i++)
                {
                    if(str1[i]>='A'&& str1[i]<='Z')
                    str1[i]=str1[i]+32;
                    else if(str1[i]>='a' && str1[i]<='z')
                    str1[i]=str1[i]-32;
                }   
                printf("%s\n",str1);   
                for(i=0;str2[i]!='\0';i++)
                {
                    if(str2[i]>='A'&& str2[i]<='Z')
                    str2[i]=str2[i]+32;
                    else if(str2[i]>='a' && str2[i]<='z')
                    str2[i]=str2[i]-32;
                }   
                printf("%s",str2);    
                break;
        case 3 :  while(i<j-1)
                  {
                    temp=str1[i];
                    str1[i]=str1[j-1];
                    str1[j-1]=temp;
                    i++;
                    j--;
                  }   
                  printf("%s",str1);  
                  i=0;  
                  while(i<k-1)
                  {
                    temp=str2[i];
                    str2[i]=str2[k-1];
                    str2[k-1]=temp;
                    i++;
                    k--;
                  }   
                  printf("\n%s",str2);      
        case 4: for(i=0;i<j;i++)
                {
                   int flag=0;
                   for(l=i+1;l<j;l++)
                   {
                     if(str1[i]==str1[l])
                     {
                        temp=str1[l];
                        str1[l]=str1[j-1];
                        str1[j-1]=temp;
                        j--;
                        flag=1;
                     }
                   }
                     if(flag==1)
                     i--;
                }
               
                str1[j] = '\0';
                
                printf("%s",str1);               
    }


}
