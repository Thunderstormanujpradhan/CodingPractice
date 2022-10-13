// Write program to print the word format of a four digit number.
// Example:-3798 is displayed as - Three Seven Nine Eight
#include<stdio.h>
int main()
{
    int a[4],i;
    printf("Enter a four digit number : ");
    for(i=0;i<4;i++)
    scanf("%1d",&a[i]);
    for(i=0;i<4;i++)
    { 
    switch(a[i])
    {
        case 0 : printf("Zero ");
                 break;
        case 1 : printf("One ");
                 break;
        case 2 : printf("Two ");
                 break; 
        case 3 : printf("Three ");
                 break;
        case 4 : printf("Four ");
                 break;
        case 5 : printf("Five ");
                 break;
        case 6 : printf("Six ");
                 break;
        case 7 : printf("Seven ");
                 break;
        case 8 : printf("Eight ");
                 break;
        case 9 : printf("Nine ");
                 break;   
        }   
    }
     
}