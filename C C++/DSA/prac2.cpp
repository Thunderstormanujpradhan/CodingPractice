#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{   char s='e';
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout<<setprecision(2);
    cout.setf(ios::showpos);
   // cout.setf(ios::left);
    cout<<5.5<<endl;
    cout<< 4.4<<endl;
   // transform(s.begin(), s.end(), s.begin(), ::toupper);
   s=toupper('e');
    cout<<s;
}
