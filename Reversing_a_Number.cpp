#include<iostream>
using namespace std;
int main()
{
    int n,rem,rev=0;
    /* Rem--> Remainder & rev-->Reverse of number */
    cout<<"\n Enter the number to be reversed"<<endl;
    /* Seeking input from user*/
    cin>>n;
    /* Using a while loop to calculate the reverse of the number */
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }

    cout<<"\n Reverse of number is="<<" "<<rev;
    return 0;
}
