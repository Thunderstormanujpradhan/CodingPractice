#include<iostream>
using namespace std;
class distance1
{
    private:
        int feet;
        int inches;
    public:
        void getdata()
        {
            cout<<"Enter feet: ";
            cin>>feet;
            cout<<"Enter inches: ";
            cin>>inches;
        }
        void displaydata()
        {
            cout<<"Distance in feet= "<<feet<<", inches= "<<inches<<endl;
        }
        void add(distance1 d1, distance1 d2)
        {
            feet = d1.feet + d2.feet;
            inches = d1.inches + d2.inches;
            feet = feet + (inches / 12);
            inches = inches % 12;
        }
};
int main()
{
    distance1 d1, d2, d3;
    d1.getdata();
    d2.getdata();
    d3.add(d1, d2);
    d3.displaydata();
    return 0;
}