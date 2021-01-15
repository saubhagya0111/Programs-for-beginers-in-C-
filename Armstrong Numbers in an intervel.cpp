#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n1,n2,sum=0,rem,n,c=0;
    cout<<"\n Enter the first number";
    cin>>n1;
    cout<<"\n Enter the second number";
    cin>>n2;
    int s=n1<n2?n1:n2;
    int l=n1>n2?n1:n2;
    int t;
    cout<<"\n Armstrong Numbers are";
    for(int i=s+1;i<=l;i++)
    { 
        t=i;
        sum=0;
        while(t!=0)
       { 
        rem=t%10;
        sum+=pow(rem,3);
        t/=10;
       }
        if(i==sum)
        {
            cout<<i<<endl;
            c++;

        }

    }
    if(c==0)
    {
        cout<<"\n No Armstrong Number found";
    }
    return 0;

}
