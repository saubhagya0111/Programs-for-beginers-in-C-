#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void prime()
{
    int n,flag=0;
    cout<<"\n Enter the number";
    cin>>n;
    for(int i=2;i<(n/2);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"\n Prime Number";
    }
else 
cout<<"\n Non Prime Number";
}
int main()
{
    prime();
    return 0;
}
