// Write a program that adds two complex numbers. The objects must be passed as function
// arguments.
#include<iostream>
using namespace std;
class Complex{
    private : 
    int real;
    int img;
    public :
    void getdata()
    {
        cout<<"Enter the real and img part of a complex  number : ";
        cin>>real>>img;
    }
    void add(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        img = c1.img + c2.img;
    }
    void displayData()
    {
        cout<<real<<"+"<<img<<"i";
    }



};
int main()
{
    Complex c1, c2, c3;
    c1.getdata();
    c2.getdata();
    c3.add(c1, c2);
    c3.displayData();


    

}