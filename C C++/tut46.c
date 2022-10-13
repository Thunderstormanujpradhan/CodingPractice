#include<stdio.h>
int main()
{
    int l=-99999,i,a[4];
  for(i=0;i<4;i++)
  scanf("%d",&a[i]);
  for(i=0;i<4;i++)
    {
        if(l<a[i])
        l=a[i];
    }
    printf("%d",l);
}