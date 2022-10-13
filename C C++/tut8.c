//To check a character is vowel or consonant or not an alphabet
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character");
    scanf("%c",&c);
    if(c>='a'&&c<='z' || c>='A'&&c<='Z')
    {if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'))
     printf("Given character is a vowel");
     else
     printf("Consonant");
    }
    else
    printf("not an alphabet");
}