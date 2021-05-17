#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, n1, n2;
    cout << "Enter the number" << endl;
    cin >> n;
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=n; j++)
        {
            if (i + j == n)
            {
                n1 = i, n2 = j;
                cout << "(" << n1 << "," << n2 << ")" << endl;
            }
        }
    }

    return 0;
}
