// Default argument
#include <iostream>
using namespace std;

int main()
{
    int sum(int a, int b = 10, int c = 15, int d = 20);

    int a = 5;
    int b = 3;
    int c = 4;
    int d = 1;
    cout << "SUM = " << sum(a, b, c, d) << endl;
    cout << "SUM = " << sum(a, b, c) << endl;
    cout << "SUM = " << sum(b, c, d) << endl;
    cout << "SUM = " << sum(a, c, d) << endl;
    return 0;
}
int sum(int a, int b, int c, int d)
{
    return(a+b+c+d);
}
