#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,rem;
    /*Seeking the input from the user*/
    cout<<"\n Enter the number";
    cin>>n;
    /*Using while loop to calculate the sum of the number by obtaing the individual digits from the end*/
    while (n!=0)
    {
       rem=n%10;
       /*Obtaining the remainder by dividing the integer by 10*/
       sum+=rem;
       /*Adding the digits to obtain the sum*/
       n/=10;
       /* removing the digit already considered to avoid the errors in the result*/
    }
    cout<<"\n Sum of the digits="<<sum;
    /*Displaying the output*/
    return 0;
    

}
