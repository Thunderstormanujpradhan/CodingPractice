#include<iostream>
using namespace std;
int main()
{
    int SI(int P = 2000, int R = 1, int T = 1);
    int P = 1000;
    int R = 2;
    int T = 2;
    cout<<"\n"<<SI();  //No Argument 
    cout<<"\n"<<SI(P);
    cout<<"\n"<<SI(P, R);
    cout<<"\n"<<SI(P,R,T);

   return 0;

}
int SI(int P, int R, int T)
{
    return(P*R*T);
}