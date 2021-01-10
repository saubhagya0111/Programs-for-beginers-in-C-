#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"\n Enter the number";
    cin>>n;
    for (int i=2; i <(n/2); i++)
    {
        if(n%i==0)
        {
           c=1;
           cout<<"\n Non Prime Number";
           break;
        }
       
    }
   if(c==0)
   {
       cout<<"\n Prime Number";
   } 
  
   return 0;
    
}
