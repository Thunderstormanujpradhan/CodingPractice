// Write a program to perform addition of two complex numbers using constructor overloading.
// The first constructor which takes no argument is used to create objects which are not
// initialized, second which takes one argument is used to initialize real and imaginary parts to
// equal values and third which takes two argument is used to initialize real and imaginary to
// two different values.
#include<iostream>
using namespace std;

class Complex{
    private :

    int real;
    int img;

    public :

    Complex()
    {
        real = 0;
        img = 0;
    }
    
};