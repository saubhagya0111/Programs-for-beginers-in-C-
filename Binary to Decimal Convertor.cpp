#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int bin,dec=0,rem,c=-1;
    /* Dec:decimal Number Bin:Binary c:counter to determine the value of the loop*/ 
    cout<<"\n Enter the binary number"<<endl;
    cin>>bin;
    /* assigning the value of the binary number to temporary number*/
    int t=bin;
    while (t!=0)
    {
        rem=t%10;
        /* increasing the value of counter*/
        c++;
        /* Converting the number by multiplying the digits with the successive powers of 2*/
        dec+=(rem*pow(2,c));
        /* Dividing the number to remove the redundency of digits*/
        t/=10;
    
    }
    cout<<"\n Decimal Number="<<dec;
    
}
