#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
   int n1,n2,sum=0;
   cout<<"\n Enter the end points of the intervel ";
   cin>>n1>>n2;
   int s=n1<n2?n1:n2;
   int l=n1>n2?n1:n2;
   cout<<"\n Nos are"<<endl;
   if(n1!=0 && n2!=0)
   {
   
   for(int i=s;i<=l;i++)
   {
       if(i%9==0)
       {
           cout<<i<<endl;
           sum+=i;
       }
       else continue;
   }
   }
   cout<<"\n Sum is"<<sum;
    return 0;
    
}
