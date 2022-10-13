//Complex No.
#include<iostream>
using namespace std;
class complex{
       private : 
       int real;
       int img;
       public :
       void getdata(int n)
       { int i;
         cout<<"Enter the number : "<<endl;
         for(i=0;i<n;i++)
         {
            cout<<i+1<<" ";
            cin>>real>>img;
            cout<<endl;
         }
       }
         void display_data(int n)
         {   int i;
            for(i=0;i<n;i++)
            {
               cout<<i+1<<" ";
               cout<<real<<"+"<<img<<"i"<<endl;
            }
         }

                 

       
};
int main()
{
    complex s;
    int n;
    cout<<"Enter total no. of complex number : ";
    cin>>n;
    s.getdata(n);
    s.display_data(n);
}