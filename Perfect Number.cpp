#include <bits/stdc++.h>
using namespace std;
//A number equal to the sum of the individual digits is termed as a perfect number
void perfect_number(int n)
{
    int t = n, sum = 0;
    //Calculating the sum of the digits using conventional while loop
    while (t != '\0')
    {
        int rem = t % 10;
        sum += rem;
        t /= 10;
    }
    if (sum == n)
    {
        cout << "Perfect number" << endl;
    }
    else if (sum != n)
    {
        cout << "Not a Perfect number" << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    perfect_number(n);
    return 0;
}
