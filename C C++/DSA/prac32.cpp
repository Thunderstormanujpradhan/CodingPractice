#include<iostream>
using namespace std;
int main()
{
   int count = 0;
    int N =100;
    int outer = 0;
for (int i = N; i > 0; i /= 2, outer++)
  for (int j = 0; j < i; j++)
    count++;
    cout << count << endl;
    cout << outer << endl;
}