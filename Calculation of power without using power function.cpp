#include<iostream>
using namespace std;
int main()
{
    int base,p,r=1,t;
    /*P:Power t:Temporary variable r:Resultant*/
    cout<<"\n Enter the Base";
    cin>>base;
    cout<<"\n enter the power";
    cin>>p;
    t=p;
    /*Using while loop to calculate the power*/
    while (t!=0)
    {
        r*=base;
        t--;
    }
    /*displaying the result*/
    cout<<base<<"^"<<p<<"="<<r;
    return 0;
}
    
