#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
