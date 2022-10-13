#include<stdio.h>
int main()
{
    int num, x ,sum=0;
    printf("Enter the no. ");
    scanf("%d",&num);
    while(num>0)
   {
    x=num;
    x=x%10;
    num=num/10;
    sum=sum+x;}
    printf("%d",sum);
    return 0;
   
    

}