#include<iostream>
using namespace std;
class point{
    int x, y;
    public:
    point(int a, int b) //Inline parameterized constructor definition
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout<<"("<<x<<" , "<<y<<")"<<endl;
    }
};
int main()
{
    point p1(1, 1); //Invoke parameterized constructor
    point p2(2, 2);
    p1.display();
    p2.display();
    return 0;
}
