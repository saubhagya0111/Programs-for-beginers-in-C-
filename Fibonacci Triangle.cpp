#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, n;
    cout << "Enter the number of terms to be printed" << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        a = 0, b = 1;
        for (int j = 0; j <= i; j++)
        {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
        cout << endl;
    }
    return 0;
}
