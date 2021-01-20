#include<iostream>
using namespace std;
int main()
{
    int n,t,c=0;
    /* declaring the variable c:counter t:temporary n:Input from user c:counter*/
    cout<<"\n Enter the number"<<endl;
    cin>>n;
    /* Assigning the value of the number to the temporary variable*/ 
    t=n;
    /* Using the While loop to count the digits Counter increases its value upto the point number doesn't equalts zero*/
    while (t!=0)
    {
        c++;
        t/=10;
    }
    cout<<"\n Number of digits="<<" "<<c;
    return 0;
    
}
