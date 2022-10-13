//Fibonacci series
#include<iostream>
using namespace std;
int main()
{
    int n_716,i_716,a_716=0,b_716=1,result_716=0;
    cout<<"Enter the nth term ";
    cin>>n_716;
    for(i_716=1;i_716<=n_716;i_716++)
    { cout<<a_716;
       result_716=a_716+b_716;
       a_716=b_716;
       b_716=result_716;
    }



}