#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int i,n;
    double f=1;
    cout<<"\n Enter the value of the number whose factorial is to be printed"<<endl;
    cin>>n;
    for ( i=1; i<=n;i++)
    {
        f*=i;
        
    }
    cout<<"Factorial of"<<"  "<<n<<"= "<<f;
    return 0; 
    

}
