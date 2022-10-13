//WAP to calculate the series 1-2/2!+3/3!-4/4!+…+n/n!
#include<iostream>
using namespace std;

 
int main()
{
    int n_716,i_716,j_716;
    float sum_716=0.0,s_716=0.0;
    cout<<"Enter the nth term ";
    cin>>n_716;
    for(i_716=1;i_716<=n_716;i_716++)
    { int fact_716=1;
    for(j_716=1;j_716<=i_716;j_716++)
        fact_716=fact_716*j_716;
    if(i_716%2!=0)
     sum_716=sum_716+(i_716*1.0)/fact_716;
     if(i_716%2==0)
     s_716=s_716+(i_716*1.0)/fact_716;

    }
    cout<<sum_716-s_716;

}