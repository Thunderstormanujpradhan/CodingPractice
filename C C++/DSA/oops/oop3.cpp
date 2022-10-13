//Factorial
#include<iostream>
using namespace std;
class factorial
{ 
    private:
    int num;
    int fact=1;
    public:
  void getdata()
    {
    cout<<"Enter the no. ";
    cin>>num;
    }
    void displayresult()
    { int i;
        for(i=1;i<=num;i++)
         fact=fact*i;
         cout<<fact;
    }


};
int main()
{
    factorial f;
    f.getdata();
    f.displayresult();
}
