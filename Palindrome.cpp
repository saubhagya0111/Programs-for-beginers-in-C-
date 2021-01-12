#include<iostream>
#include<conio.h>
using namespace std;
/* C++ program to check if a number is a palindrome */
int main()
{
    int rev=0,n,rem;
    cout<<"\n Enter the number which is to be checked";
    cin>>n;
    int temp=n
    /* Reversing a number using while loop */
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    /* Checking if the input satisfies the definition of the palindrome using if condition */
    if(temp==rev)
    {
        cout<<"\n Number is a palindrome";
   
    }
    else 
    cout<<"\n Number is not a palindrome";
    return 0;
    

}
