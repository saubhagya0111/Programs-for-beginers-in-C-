#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,q,r,d;
    /* Q:Quotient R:remainder n:Dividend d:divisor */
    cout<<"\n Enter the number to be divided";
    cin>>n;
    cout<<"\n Enter the Divsior";
    cin>>d;
    r=n%d;
    /* Displaying the Output using the relation Dividend=divisor*Quotient +remainder */
    cout<<"\n Quotient="<<(n-r)/d<<endl<<"\n Remainder="<<r;
    return 0; 
}
