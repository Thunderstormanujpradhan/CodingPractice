// triangles.
// LE3.2 Write a program to enter the code, name and price of items. The user must feed the quantity in
// which he wants a product. The program must calculate and display the final bill of 10 nitems.
// In the following format.
// Sl. No. Code      Name           Price Quantity Total
// ------------------------------------------------------------------------
// 1.   rib001     Printercatrige     300    2        600
// 2.   Pap45      A4 size paper      200    0        0
// 3.   Bk2109     Computer book      350    5        1750
// --------------------------------------------------------------------------
//                                              Total = Rs.2350/-
#include<iostream>
using namespace std;
int Total = 0;
class bill{
    private :
    char Code[20];
    char Name[30];
    int Price;
    int Quantity;
    public :  
   
    void getData()
    {
       cout<<"Enter the Code, Name, Price, Quantity : ";
       cin>>Code>>Name>>Price>>Quantity;
    }
    int displayData()
    {   //static int Total;
        cout<<Code<<"\t\t"<<Name<<"\t\t"<<Price<<"\t\t"<<Quantity<<"\t\t"<<Price * Quantity<<endl;
        Total = Total+Price * Quantity;
    }

};
 
void line()
{
    for(int i = 0; i<90; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
int main()
{
    bill b[10];
    for(int i = 0; i<10; i++)
    {
       b[i].getData();
    }
    line();
    cout<<"Code\t\t"<<"Name\t\t"<<"Price\t\t"<<"Quantity\t\t"<<"Total"<<endl;
    line(); 
    for(int j=0; j<10; j++)
    {
       b[j].displayData();
    }
    line();
    cout<<"\t\t\t\t\t\t\t\t"<<Total;
   
   
}