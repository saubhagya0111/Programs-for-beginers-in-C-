#include <iostream>
using namespace std;
//32 BIT format
int main()
{
    int dec, rem, bin[32];
    for (int i = 0; i < 32; i++)
    {
        bin[i] = 0;
    }
    cout << "Enter the decimal number\n";
    cin >> dec;
    int t = dec;
    int i = 31;
    while (t > 0)
    {
        int rem = t % 2;
        t /= 2;
        bin[i] = rem;
        i--;
    }
    for (int i = 0; i < 32; i++)
    {
        cout << bin[i];
    }

    return 0;
}
