//Printing pattern
#include<iostream>
using namespace std;
int main()
{
    int n_716,i_716,j_716;
    cout<<"Enter the no. of rows ";
    cin>>n_716;
    for(i_716=0;i_716<n_716;i_716++)
    {
        for(j_716=0;j_716<=i_716;j_716++)
      {cout<<((char)('A'+j_716))<<" ";
      }
      cout<<endl;
    }

}