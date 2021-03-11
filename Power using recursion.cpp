#include <bits/stdc++.h>
using namespace std;
double expo(int n1,int n2)
{
    if (n2==0)
    {
        return 1;
    }
    return(n1*expo(n1,n2-1));
    //Assume user needs to calculate 2^3
    //Initially the condition becomes 2*expo(2,2)-->2*2*expo(2,1)-->2*2*2*expo(2,0)-->2*2*2*1=8
    
}
int main()
{
 int base,exp;
 cout<<"\nEnter the base";
 cin>>base;
 cout<<"\nEnter the exponent";
 cin>>exp;
 cout<<base<<"^"<<exp<<"="<<expo(base,exp);
return 0;

}
