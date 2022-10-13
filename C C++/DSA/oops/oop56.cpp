//WAP to demonstrate the order of call of constructors and destructors for a class
#include<iostream>
using namespace std;

class a{
    public :

    a()
    {
        cout<<"\nParent class is formed ";
    }

    ~a()
    {
        cout<<"\nParent is destroyed ";
    }
};

class b : public a
{  public :
    b()
    {
        cout<<"\nChild class is formed ";
    }

    ~b()
    {
        cout<<"\nChild class is destroyed ";
    }
};
int main()
{
    b b1 = b();
}