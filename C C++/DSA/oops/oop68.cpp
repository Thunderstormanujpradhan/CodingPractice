// 6.WAP to concatenate three strings using recursion.

#include <iostream>
#include <string.h>
using namespace std;


string repeat(string s, int n)
{
	
	string s1 = s;

	for (int i=1; i<n;i++)
		s += s1; 

	return s;
}


int main()
{
	string s = "Anuj Pradhan ";
	int n = 3;
	cout << repeat(s, n) << endl;
	return 0;
}
