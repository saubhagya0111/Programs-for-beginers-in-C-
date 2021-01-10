#include<iostream>
/* C++ program to find the largest of three numbers by initialting dynamic initialization of operator*/
using namespace std;
int main()
{
    int a,b,c,l;
    cout<<"\n Enter the three Numbers"<<endl;
    cin>>a>>b>>c;
    /* Finding the largest number using conditional operator*/
    l=a>b?a>c?a:c:b>c?b:c;
    cout<<"\n Largest Numer is"<<"="<<l;
    return 0;
}
