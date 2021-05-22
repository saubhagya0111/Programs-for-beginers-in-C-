#include<iostream>
using namespace std;
int main()
{
    int n1,n2,flag;
    //Seeking input from the user
    cout<<"\n Enter the first number";
    cin>>n1;
    cout<<"\n Enter the second number";
    cin>>n2;
    cout<<"\n Prime Numbers are "<<endl;
    //Comparing the largest and the smallest nos
    int s=n1<n2?n1:n2;
    int l=n1>n2?n1:n2;
    //A loop to find the numbers between the intervel
    for (int i =s;i <=l; i++)
    {
        flag=1;
        //Initialising the flag variable as 1 by default in the loop
        //Loop to determine the number of factors of each individual number by checking the divisibility
        //For any number you'll find at least one factor in order to judge if the number is a prime number within the range the square root of the number
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        //Displaying the prime numbers using if condition whaen value of flag=0
        if (flag==1)
        {
            cout<<i<<endl;

        }
        
    }
    cout<<"\n Program executed";
    return 0;
}
