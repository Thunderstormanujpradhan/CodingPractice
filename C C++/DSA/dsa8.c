//Remove repeated element
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    int a[n],i,j,temp;
    printf("Enter the elements of an array ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Array after removing the repeated elements\n");
    for(i=0;i<n;i++)
    {
        int flag = 0;
        for(j=i+1;j<n;j++)
        {  if(a[i]==a[j])
           { temp=a[j];
            a[j]=a[n-1];
            a[n-1]=temp;
            n--;
            flag = 1;
           }
        }

        if (flag==1) i--;

    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

}