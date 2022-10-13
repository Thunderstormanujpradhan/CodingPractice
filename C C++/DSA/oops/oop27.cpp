// Write a program to demonstrate the use of scope resolution operator(::) by declaring same
// varibale name globally and locally and display the value of gloabl and local variables.
#include<iostream>
using namespace std;
int a=2;
int main()
{
    int a = 1716;
    cout<<"Value of global variable "<<::a<<endl;
    cout<<"Value of local variable "<<a;


}