//1+1/2+1/3 .....
#include<stdio.h>
int main ()
{
    float i,n,sum=0;
    printf("Enter the nth term");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    sum=sum+1.0/i;
    printf("%f",sum);
    return 0;

}