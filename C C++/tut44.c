//Call by  value (passing value not address)
#include<stdio.h>
void func(int, int);
void main()
{
    int x=5,y=7;
    func(x,y);
    printf("\nx=%d and y=%d",x,y);
}
void func(int x, int y) // Local variables
{
    x=7,y=5;
     printf("x=%d and y=%d",x,y);
}