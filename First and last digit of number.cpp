#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number\n";
    cin >> n;
    int last = n % 10;
    while (n >= 10)
    {
        n /= 10;
    }
    int first = n;
    cout << "First digit=" << first << endl;
    cout << "last digit=" << last << endl;

    return 0;
}
