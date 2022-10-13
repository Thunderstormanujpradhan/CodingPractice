// (Single Inheritance) Write a program to create a class CIRCLE with one field as radius, used
// to calculate the area of a Circle. Create another class RECTANGLE used to calculate the area
// of the rectangle which is a subclass of CIRCLE class. Use the concept of single inheritance
// such that the radius of circle class can be re-used as length in rectangle class. Take necessary
// data members and member functions for both the classes to solve this problem. All the data
// members are initialized through the constructors. Show the result by accessing the area
// method of both the classes through the objects of rectangle class.

#include <iostream>
using namespace std;

class CIRCLE
{
protected:
    int radius;

public:
    CIRCLE(int p)
    {
        radius = p;
    }
    void showx()
    {
        cout << "Area of circle is : " << 3.14 * radius * radius << endl;
    }
};

class RECTANGLE : public CIRCLE
{
    int l, b;

public:
    RECTANGLE(int x, int y) : CIRCLE(x)
    {
        l = x;
        b = y;
    }
    void showy()
    {
        showx();
        cout << "Area of rectangle : " << l * b;
    }
};

int main()
{

    int x, y;
    cout << "Enter the length and breadth of the rectangle : ";
    cin >> x >> y;
    RECTANGLE r(x, y);
    r.showy();
    return 0;
}
