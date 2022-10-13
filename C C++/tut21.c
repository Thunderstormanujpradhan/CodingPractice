//To check a no. is present or not
#include<stdio.h>
int main()
    {
        int x[5],i,n=0,m;
        printf("Enter 5 no. as per your choice");
        for(i=0;i<5;i++)
        {
            scanf("%d",&x[i]);
            }
            printf("Enter a number to check the no. is present or not ");
            scanf("%d",&m);
            for(i=0;i<5;i++)
            {
                if(x[i]==m)
              {  printf("Present");
              n=n+1;
                break;}
            
            }
           if(n==0)
           printf("Not Present");
    }
