#include<iostream>
#include<math.h>
using namespace std;
/* C++ program to check for an armstrong number for three digit number*/ 
int main()
{
    int n,t,r,s=0;
    /* Initializing the sum as zero,r:remainder,t=temporary variable*/
    cout<<"\n Enter the number<1000";
    cin>>n;
    /* Assigning value to a temporary variable equivalent to the number entered by the user*/ 
    t=n;
    /* Using a while loop to check if input satisfies the condition for armstrong number*/
    while(n>0)
    {
        r=n%10;
        s=s+pow(r,3);
        n/=10;
    }
    /* Comparing the sum and temporary variable using if condition*/
    if(t==s)
    {
        cout<<"\n Armstrong  Number";
    }
    else 
    cout<<"\n No is not an armstrong number";
    return 0;
    
}
