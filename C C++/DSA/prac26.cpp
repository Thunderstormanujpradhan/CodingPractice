//Constructor Overloading
#include<iostream>
#include<conio.h>
using namespace std;
class num{
    private :
    int a;
    float b;
    char c;
    public :
    num(int m, float j, char k);
    num(int m, float j);
    num();
    void show()
    {
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"c = "<<c;
    }
};
num :: num(int m, float j, char k)
{
    cout<<"Using 3 argument : ";
    a = m;
    b = j;
    c = k;
}
num :: num(int m, float j)
{
    cout<<"Using 2 argument : ";
    a = m;
    b= j;
    c = ' ';
}
num :: num()
{
    cout<<"Using no argument : ";
    a = b = c = NULL;
}
int main()
{
    num x(1, 2, 'A');
    x.show();
    num y(3,4);
    y.show();
    num z;
    z.show();

}