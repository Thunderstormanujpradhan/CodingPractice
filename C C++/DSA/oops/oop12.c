// WAP to print the numbers which are divisible by 7 and 13 within a range.
#include<stdio.h>
int main()
{
    int lowerlimit,upperlimit,i;
    printf("Enter the range ");
    scanf("%d%d",&lowerlimit,&upperlimit);
    printf("No. divisible by 7 and 13 in given range are ");
    for(i=lowerlimit;i<=upperlimit;i++)
    {
        if(i%7==0&& i%13==0)
        printf("%d ",i);
    }
}