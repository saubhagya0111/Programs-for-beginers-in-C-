#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"\n Enter the Number to be entered";
    cin>>n;
    /* Using the for loop to display the table */ 
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<" "<<"="<<n*i<<"\n";
    }
    return 0; 
} 
