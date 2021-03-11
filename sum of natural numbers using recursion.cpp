#include <bits/stdc++.h>
using namespace std;
float sum(int n1)
{
    if (n1 <= 1)
    {
        return 1;
        //Defining the base condition for recursive approach as 1+0=1 with the sum of first natural number
    }
    //Displaying the sum by returning the desired value
    return n1 + sum(n1 - 1);
}
int main()
{
    int n;
    cout << "\nEnter the number upto which the sum is to be calculated";
    cin >> n;
    cout << "\nSum of the numbers=" << sum(n);
    return 0;
}
