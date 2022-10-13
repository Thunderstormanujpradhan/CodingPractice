#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,even=0,odd=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    { if(i%2==0)
    even=even+a[i];
    if(i%2!=0)
    odd=odd+a[i];
}
char k;
scanf("%s",&k);
if(k==98)
printf("%d",even);
else
printf("%d",odd);

}