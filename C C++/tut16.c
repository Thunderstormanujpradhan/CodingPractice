#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,i,n;
    printf("Enter the nth no.");
    scanf("%d",&n);
    printf("%d ",a);
    for(i=0;i<n-1;i++)
    { printf("%d\t",c);
        c=a+b;
        a=b;
        b=c;
        
    
   
    }
    return 0;

}