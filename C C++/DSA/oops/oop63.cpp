#include<iostream>
#include<math.h>
using namespace std;
int main()
{ int i,j,n,m,a[10][10],sum=0;
double norm;
cout<<endl<<"Enter the dimensions:: ";
cin>>n>>m;

cout<<endl<<"Enter the elements of matrix::"<<endl;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
cin>>a[i][j];

cout<<endl<<"Original Matrix is:: ";
for(i=0;i<n;i++)
{ cout<<endl;
for(j=0;j<n;j++)
cout<<"\t"<<a[i][j];
}

for(i=0;i<n;i++)
for(j=0;j<m;j++)
{ sum+=(a[i][j] * a[i][j]);
}

norm=sqrt((double)sum);

cout<<endl<<"NORM:: "<<norm;
}