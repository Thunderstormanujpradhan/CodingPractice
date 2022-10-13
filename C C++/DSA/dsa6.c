#include<stdio.h>
const int a=3;
const int b=3;
void print(int arr[a][b])
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        printf("%d",arr[i][j]);
        printf("\n");
    }
}
void f1(int(*b)[3])
{ int i;
  for(i=0;i<3;i++)
  printf("%d",*(*(b+1)+i));
}
int main()
{    int arr[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
 int *c=&arr[0][0];
    print(arr);
    printf("\n");
    f1(arr);
    

}