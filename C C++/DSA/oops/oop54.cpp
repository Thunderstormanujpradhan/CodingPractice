#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class DB;
class DM {
    float m,c;
    public:
    void getData();
    friend void add(DM,DB);
};
class DB {
    float f,i;
    public:
    void getData();
    friend void add(DM,DB);
};
void DM::getData() {
    cout<<"Enter the distance in meter : ";
    cin>>m;
    cout<<"Enter the distance in centimeter : ";
    cin>>c;
}
void DB::getData() {
    cout<<"Enter the distance in feet : ";
    cin>>f;
    cout<<"Enter the distance in inch : ";
    cin>>i;
}
void add(DM d1,DB d2) {
    double m,cm,f,i;
    cout<<"\nAddition of distance = ";
    cm=d1.c+fmod(d1.m,(int)d1.m)*100+d2.i*2.54+d2.f*30.48;
    m=(int)d1.m+cm/100;
    cm=fmod(cm,100);
    cout<<(int)m<<" (m) "<<cm<<" (cm)";
    i=d2.i+fmod(d2.f,(int)d2.f)*12+d1.c*0.393701+d1.m*39.3701;
    f=(int)d2.f+i/12;
    i=fmod(i,12);
    cout<<"\nAddition of distance = ";
    cout<<(int)f<<" (ft) "<<i<<" (inch)";
}
int main() {
    DM d1;
    DB d2;
    d1.getData();
    d2.getData();
    add(d1,d2);
    return 0;
}