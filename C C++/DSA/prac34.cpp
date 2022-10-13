//Multiple constructor
#include<iostream>
using namespace std;
class integer{
     int m, n;
     public :
     integer()
     {
        m =0;
        n = 0;
     }
     integer(int a, int b)
     {
        m = a;
        n = b;
     }
     integer(integer(&i))
     {
        m = i.m;
        n = i.n;
     }
     void display()
     {
        cout<<"m = "<<m<<"  n = "<<n<<endl;
     }
};
int main()
{
    integer i;
    i.display();
    integer i1(10, 20);
    i1.display();
    integer i2(i1);
    i2.display();




}