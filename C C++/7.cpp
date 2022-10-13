//Palindrome
#include<iostream>
using namespace std;
int main()
{
     int a_716,b_716,rem_716,rev_716=0;
     cout<<"Enter the number ";
     cin>>a_716;
     b_716=a_716;
    while(a_716!=0)
    {
        rem_716=a_716%10;
        rev_716=rev_716*10+rem_716;
        a_716=a_716/10;
    }
    if(b_716==rev_716)
    cout<<"Palindrome";
    else
    cout<<"Not a Palimdrome";
 return 0;
}