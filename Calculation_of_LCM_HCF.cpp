#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n1,n2,lcm,hcf,g;
    cout<<"\n Enter the Nos whose LCM is to be calculated";
    cin>>n1>>n2;
    g=n1>n2?n1:n2;
    for(int i=1;i<(g/2);i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    lcm=(n1*n2)/hcf;
    cout<<"\n LCM="<<lcm<<"\n HCF="<<hcf;
    return 0;
}
