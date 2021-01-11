#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    char ch;
    cout<<"\n Enter the charecter";
    cin>>ch;
    if(isalpha(ch))
    {
    if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
    {
        cout<<"\n Charecter is a Vowel ";
    }
    else 
    cout<<"\n Charecter entered is a Consonent";
   
    }
    else 
    cout<<"\n Invalid input";
    return 0;
}
