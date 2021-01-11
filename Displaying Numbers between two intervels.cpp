#include<iostream>
using namespace std;
/* C++ program to display numbers betweeen two intervels*/
 int main()
{
    int n1,n2,s,l;
    cout<<"\n Enter the two numbers";
    cin>>n1>>n2;
    /* finding the smallest and largest numbers using Conditional operator*/
    s=n1<n2?n1:n2;
    l=n1>n2?n1:n2;
    cout<<"\n Numbers are"<<"\n";
    /* Using for loop from the smallest number to the largest one */
    for (int i=s;i<=l;i++)
    {
        cout<<i<<endl;
    
    }
    return 0;
    
}
