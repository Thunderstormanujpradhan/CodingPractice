#include<stdio.h>
int main()
{
    int month, day;
    printf("Enter no. of days");
    scanf("%d", &day);
    month = day/30;
    day%=30;
    printf("No. of months are %d", month);
    printf("No. of days are %d ",day);
    return 0;
    

}