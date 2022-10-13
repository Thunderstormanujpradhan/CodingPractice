// (Hierarchical Inheritance) Modify the program no. LE6.1 as follows:
// Derive a class named as CYLINDER from CIRCLE class. Take necessary data & member
// functions for this class to calculate the volume of the cylinder. Show the result by accessing
// the area method of circle and rectangle through object of rectangle class and the area of circle
// and volume method of cylinder class through the objects of cylinder class.
#include<iostream>
using namespace std;


class CIRCLE
{
protected:
    int radius;

public:
    CIRCLE(int r)
    {
        radius = r;
    }
    void showx()
    {
        cout << "Area of the circle : " << 3.14 * radius * radius << endl;
    }
};

class RECTANGLE
{
    protected :
    int length;
    int breadth;

    public :
    RECTANGLE(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void showy()
    {
        cout<<"Area of rectangle is "<<length * breadth<<endl;
    }
};

class CYLINDER : public RECTANGLE, public CIRCLE
{
    protected :
    int radius;
    int height;

    public :
    CYLINDER(int r, int h) : RECTANGLE(r, h) , CIRCLE(r)
    {
        radius = r;
        height = h;
    }
    void showz()
    {
        showx();
        showy();
        cout<<"Volume of Cylinder is "<<3.14 * radius * radius * height;
    }

};

int main()
{
    int r, h;
    cout<<"Enter the radius and height of the Cylinder ";
    cin>>r>>h;
    CYLINDER c(r, h);
    c.showz();
}





