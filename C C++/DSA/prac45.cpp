// Write a program to find out the area of an rectangle through friend function and member
// function separately of Rectangle class.
#include<iostream>
using namespace std;
class Rectangle{
    private :
    int length, breadth;
    public :
    void getData()
    {
       cout<<"Enter the length and breadth of the rectangle : ";
       cin>>length>>breadth;
    }
    void printData()
    {
      cout<<"Area of rectangle using member function is : "<<length * breadth<<endl<<endl;
    }
    friend void fun(Rectangle);
};

void fun(Rectangle r2)
{
     cout<<"Area of rectangle using friend function is : "<<(r2.length)*(r2.breadth);
}

int main()
{
    Rectangle r1, r2;
    r1.getData();
    r1.printData();
    r2.getData();
    fun(r2);
}