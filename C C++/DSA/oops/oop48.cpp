// Define a class named as FRACTION that contains two data members that represent the
// numerator and denominator of a fraction. By defining necessary member functions, write a

// program to add, subtract and multiply two fractions. The add accepts the objects using call-
// by- value technique, subtract using call-by-reference and multiply using call-by-address

// technique.
#include<iostream>
using namespace std;

void callByValue(int a, int b)
{
    cout<<a+b;
}

void callByReference(int &a, int &b)
{
    cout<<a-b;
}

void callByAddress(int *a, int *b)
{
    cout<<(*a)*(*b);
}


int main()
{
    int a, b;
    cout<<"Enter the value of a and b for call by value : ";
    cin>>a>>b;
    callByValue(a, b);
    cout<<"\nEnter the value of a and b for call by reference : ";
    cin>>a>>b;
    callByReference(a, b);
    cout<<"\nEnter the value of a and b for call by address : ";
    cin>>a>>b;
    callByAddress(&a, &b);
}