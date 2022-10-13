//Finding HCF
#include<stdio.h>
int main()
{
    int a,b,i,k=1;
    printf("Enter 2 no. (1st should be greater than 2nd)");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
      if(a%i==0&&b%i==0)
      k=i;
    }
      printf("%d",k);
    
    return 0;

}