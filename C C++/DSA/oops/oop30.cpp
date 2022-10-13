// LE1.2 Write a program to demonstrate the use of scope resolution operator(::) by declaring same
// varibale name globally and locally and display the value of gloabl and local variables.
#include<iostream> 
using namespace std;
   
int x=69;  // Global variable
   
int main()
{
  int x = 100; // Local variable
  cout << "Global value of x is: " << ::x<<endl; //Accesisng Global variable 
  cout << "Local value of x is: " << x;// Accesing Local variable
  return 0;
}