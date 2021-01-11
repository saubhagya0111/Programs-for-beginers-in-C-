#include<iostream>
using namespace std;
/* UDF to display the factor */
void factor()
{
    int n;
    cout<<"\n enter the number";
    cin>>n;
    cout<<"\n Factors are:-";
    /* Using a for loop to calculate the factors and printing it*/
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;

        }
    else continue;
    }

}
int main()
{
    /* Calling the function in main() */
    factor();
    return 0;
}
