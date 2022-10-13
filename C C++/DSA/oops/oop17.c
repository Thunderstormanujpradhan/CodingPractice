// WAP to Count the total number of notes in a given amount.
#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,g,h,i,j,k;
    printf("Enter the amount : ");
    scanf("%d",&n);
    a=n/2000;
    b=(n%2000)/500;
    c=((n%2000)%500)/200;
    d=(((n%2000)%500)%200)/100;
    e=((((n%2000)%500)%200)%100)/50;
    f=((((((n%2000)%500)%200)%100)%50))/20;
    g=(((((((n%2000)%500)%200)%100)%50))%20)/10;
    h=((((((((n%2000)%500)%200)%100)%50))%20)%10)/5;
    i=(((((((((n%2000)%500)%200)%100)%50))%20)%10)%5)/2;
    j=((((((((((n%2000)%500)%200)%100)%50))%20)%10)%5)%2)/1;
    printf("Total no. of notes in a given amount are :  \n");
    printf("2000: %d\n500: %d\n200: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d\n",a,b,c,d,e,f,g,h,i,j);



}
