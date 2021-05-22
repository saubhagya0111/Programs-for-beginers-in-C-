#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void prime()
{
    int n,flag=0;
    cout<<"\n Enter the number";
    cin>>n;
     //For any number you'll find at least one factor in order to judge if the number is a prime number within the range the square root of the number
    for(int i=2;i<=sqrt(n/2);i++)
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
