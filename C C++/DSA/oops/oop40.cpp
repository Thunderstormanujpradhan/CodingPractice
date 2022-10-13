// Create a class TIME with members hour, minute and second. Write a program that adds two
// time objects.The objects must be passed as function arguments.
#include<iostream>
using namespace std;
class TIME{
    private :
    int hour;
    int min;
    int sec;
    public :
    void getData()
    {
        cout<<"Enter time in hour, min, sec : ";
        cin>>hour>>min>>sec;
    }
    void add(TIME t1, TIME t2)
    {
        hour = t1.hour + t2.hour ;
        min = t1.min + t2.min ;
        sec = t1.sec + t2.sec;
        hour = hour + min/60 + sec/3600;
        min = min % 60 + sec / 60;
        sec = sec %60;



    }
    void displayData()
    {
        cout<<hour<<" "<<min<<" "<<sec;
    }


};
int main()
{
    TIME t1, t2, t3;
    t1.getData();
    t2.getData();
    t3.add(t1, t2);
    t3.displayData();
}
