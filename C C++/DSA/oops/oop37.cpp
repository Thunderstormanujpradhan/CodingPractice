// Define a class called Triangle, with two fields as base and height to calculate the area of a
// triangle. The class contains two methods such as getData() to initialize the fields of a triangle
// and areaTrin() to calculate the area of a triangle. Write a program to find out area of 10
// triangles.
#include<iostream>
using namespace std;
class triangle{
    private :
    int b;
    int h;
       
    public :
    void getdata()
    {
        float area;
        cin>>b>>h;
       
    }
    void areaTrin()
    {
        float area;
        area = 0.5 * b * h;
        cout<<"Area of triangle is : "<<area<<endl;
    }

};
int main()
{
    triangle t;
    for(int i=0; i<10; i++)
    {   cout<<"Enter the base and height of a triangle : "<<endl; 
        t.getdata();
        t.areaTrin();
    }

}