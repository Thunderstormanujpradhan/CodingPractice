#include<iostream>
using namespace std;
class complex
{
    private:
    float real[10];
    float img[10];
    public:
    void getdata()
  { cout<<"Enter the complex no. "<<endl;
    int i;
    for(i=0;i<10;i++)
   { cout<<i+1<<"-";
    cin>>real[i]>>img[i];
  }
  }
  void displaydata()
  { cout<<"Complex No. are: "<<endl;
    int i;
    for(i=0;i<10;i++)
    cout<<real[i]<<"+"<<img[i]<<"i"<<endl;

  }

};
int main()
{
    complex c;
    c.getdata();
    c.displaydata();
}