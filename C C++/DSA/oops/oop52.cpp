// Create a class 'COMPLEX' to hold a complex number. Write a friend function to add two
// complex numbers. Write a main function to add two COMPLEX objects.
#include<iostream>
using namespace std;
class Complex{
    private : 
    int real;
    int img;
    public :
    void getData()
    {
       cout<<"Enter the real and img part of the complex : ";
       cin>>real>>img;
    }

    void add(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        img = c1.img + c2.img;
    }
    
    void displayData()
    {
        cout<<"Adding two comlex objects : ";
        cout<<real<<" + "<<img<<"i";
    }
    private:
    friend void sum(Complex, Complex);
};

void sum(Complex c1, Complex c2)
{
    cout<<"\nAdding two complex number using friend function : ";
    cout<<c1.real + c2.real<<" + "<<c1.img + c2.img<<"i";
}

int main()
{
    Complex c1, c2, c3;
    c1.getData();
    c2.getData();
    c3.add(c1, c2);
    c3.displayData();
    sum(c1, c2);
}