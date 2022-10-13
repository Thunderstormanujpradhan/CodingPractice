//To check given no. is odd or even
#include<iostream>
using namespace std;
class number
{ 
    private:
   int num;
    public :
    void getdata()
    {
    cout<<"Enter the no. ";
    cin>>num;
    }
    void displayresult()
    {
      if (num%2==0)
      cout<<"Even number";
      else
      cout<<"Odd no.";
    }

};
int main()
{
    number n;
    n.getdata();
    n.displayresult();
    return 0;
}