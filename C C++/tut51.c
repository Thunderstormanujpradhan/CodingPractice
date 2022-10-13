#include<stdio.h>
int main()
{
    const int a=10;
    const int*const p=&a;
    printf("%d",p);
    const int b=2;
    // const int*const p=&b;
      printf("%d",p);
    
}