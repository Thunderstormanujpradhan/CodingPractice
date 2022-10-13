#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  long long a[n],sum=0;
  int i;
for(i=0;i<n;i++)
{scanf("%lli",&a[i]);
sum=sum+a[i];
printf("%lli %lli\n",a[i],sum);

}


printf("%lli",sum);

}
