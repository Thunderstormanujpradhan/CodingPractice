// 3.WAP to remove characters in string except alphabets
#include <iostream>
using namespace std;

int main() {
    char str[100], alphabet[100];
    int j = 0;
    cout << "Enter a string: ";
    cin>>str;

    for(int i = 0; str[i] != '\0'; ++i)
    {
        if ((str[i] >= 'a' && str[i]<='z') || (str[i] >= 'A' && str[i]<='Z'))
        {
            alphabet[j++] = str[i]; 

        }
    }
    alphabet[j] = '\0';

    cout << "Output String: " << alphabet;    
    return 0;
}