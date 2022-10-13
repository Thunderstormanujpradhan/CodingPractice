// Write a program to find out the greatest between two numbers defined in two different classes
// by using friend function.
#include<iostream>
using namespace std;
class Greatest2;
class Greatest1{
    private :
    int a;
    public :
    void getData()
    {
       cout<<"Enter the first no. : ";
       cin>>a;
    }
    friend void Greatest(Greatest1, Greatest2);
};
class Greatest2{
    private :
    int b;
    public :
    void getData()
    {
       cout<<"Enter the second no. : ";
       cin>>b;
    }
    friend void Greatest(Greatest1, Greatest2);
};

void Greatest(Greatest1 g1, Greatest2 g2)
{
    if(g1.a > g2.b)
    cout<<g1.a<<" is greater than "<<g2.b;
    else
    cout<<g1.a<<" is smaller than "<<g2.b;
}

int main()
{
    Greatest1 g1;
    Greatest2 g2;
    g1.getData();
    g2.getData();
    Greatest(g1, g2);
}