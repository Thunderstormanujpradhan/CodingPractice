// Write a program to find out the area of one rectangle and one square by using a suitable friend
// function named as area() for it.
#include<iostream>
using namespace std;
class Area{
    private :
    int length, breadth, side;
    public : 
    void getData()
    {
        cout<<"Enter the length and breadth of the rectangle  : ";
        cin>>length>>breadth;
        cout<<"Enter the side length of the square : ";
        cin>>side;
    }
    friend void area(Area);
};

void area(Area a)
{
    cout<<"Area of rectangle is : "<<(a.length)*(a.breadth);
    cout<<"\nArea of square is : "<<(a.side)*(a.side);
}

int main()
{
    Area a;
    a.getData();
    area(a);
}
