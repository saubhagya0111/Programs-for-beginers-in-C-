#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,rem;
    cout<<"\n Enter the number";
    cin>>n;
    while (n!=0)
    {
       rem=n%10;
       sum+=rem;
       n/=10;
    }
    cout<<"\n Sum of the digits="<<sum;
    return 0;
    

}
