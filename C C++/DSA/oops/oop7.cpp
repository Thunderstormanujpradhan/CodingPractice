//Distance between two points
#include<iostream>
#include<math.h>
using namespace std;
class distance1
{
    private:
    int x[2];
    int y[2];
    float dist;
    public:
    void getdata()
    {
       cout<<"Enter the coordinates "<<endl;
       int i;
       for(i=0;i<2;i++)
       cin>>x[i]>>y[i];
    }
    void displaydata()
    {  
        cout<<"Distance between two points are ";
        dist=sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]));
        cout<<dist;
    }
};
int main()
{
    distance1 d;
    d.getdata();
    d.displaydata();
    return 0;

}
