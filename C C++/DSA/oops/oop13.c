// WAP to enter a five digit number and print the below structure
// For example the no is :45678
// 4 5 6 7 8
// 5 6 7 8 4
// 6 7 8 4 5
// 7 8 4 5 6
// 8 4 5 6 7
#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    printf("Enter a 5 digit number : ");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<4;i++)
    {  temp=a[0];
    
        for(j=0;j<5;j++)
            {  
                a[j]=a[j+1];
                
            }
             a[4]=temp;
             for(j=0;j<5;j++)
            {  
              
                  printf("%d ",a[j]);
            }
            printf("\n");
           
            
    }

}