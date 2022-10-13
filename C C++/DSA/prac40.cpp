#include<iostream>
using namespace std;

class A{
    private :
    int x;
    public :
    void showx()
    {
        x = 10;
        cout<<"x = "<<x<<endl;
    }
};

class B : public A
{
    private :

    int y;

    public :

    void showy()
    {
        showx();
        y = 0;
        cout<<"y = "<<y<<endl;
    }
};


class C : public B
{
   private :
   int c = 8;

   public :

   void showc()
   {
    showy();
    cout<<"c = "<<c<<endl;
    
   }

};
int main()
{
    C b;
    b.showc();
}