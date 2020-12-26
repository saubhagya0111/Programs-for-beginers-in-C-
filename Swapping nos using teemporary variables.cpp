#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
//C++ program to swap two numbers
int main()
{
    int a,b,flag=0;
    //Flag variable taken in order to assign a temporary value to swap the numbers
    cout<<"\n Enter any two numbers";
    cin>>a>>b;
    flag=a;
    a=b;
    b=flag;
    cout<<"\n Swapped numbers are"<<endl<<"a="<<a<<"\n b="<<b;
    return 0;
}
