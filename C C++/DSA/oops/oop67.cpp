// 5.WAP to reverse a string using recursion.
#include <iostream>
using namespace std;
void reverse(char *str) {
   if(*str == '\0')
   return;
   else {
      reverse(str+1);
      cout<<*str;
   }
}
int main() {
   char str[] = "Anuj Pradhan";
   cout<<"Original String: "<<str<<endl;
   cout<<"Reversed String: ";
   reverse(str);
   return 0;
}
