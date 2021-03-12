#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = -1, b = 1, c;
    //Initializing the first and second terms in order to get the first term of the series as 0 and second one as 1 and successively obtaining other terms by adding the previous terms
    cout << "\nEnter the number of terms that you want to print in the fibonacci series";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        //Adding the integers to obtain the next terms
        c = a + b;
        //Printing the terms
        cout << c << ",";
        //Performing the operations on the intgers so that for the successive iteration the process is simplified
        a = b;
        b = c;
    }

    return 0;
}
