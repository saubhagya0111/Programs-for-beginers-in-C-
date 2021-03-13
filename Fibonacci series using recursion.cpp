#include <bits/stdc++.h>
using namespace std;
//User defined function to calculate the fibonacci series
int series(int n1)
{
    if (n1 == 0 || n1 == 1)
    {
        return n1;
    }
    //As the fibonacci series begins from 0 so base condition is defined as zero and similarly as 1 function will call itself until the base value is attained so that the recursion is perfectly implemented
    return series(n1 - 1) + series(n1 - 2);
}
int main()
{
    int n;
    //Taking the input from the user to know the number of terms to be printed in the series
    cout << "\nEnter the number of terms that you want to print in the fibonacci series";
    cin >> n;
    //A loop to call the series() function and print the series by passing i as an argument
    for (int i = 0; i < n; i++)
    {
        cout << series(i) << ",";
    }

    return 0;
}
