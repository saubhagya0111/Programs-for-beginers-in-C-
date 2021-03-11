#include <bits/stdc++.h>
//The factorial of a given number has been found using recursion
//When a function is called by itself this concept is termed as recursion
using namespace std;
double fact(int n1)
{
    if (n1 <= 1)
    {
        return 1;
    }
    return n1 * fact(n1 - 1);
}
/* Logic:- Assuming the value of n=4
fact(4)=4*fact(3)
fact(3)=3*fact(2)
fact(2)=2*fact(1)
fact(1)=1*1
*/
int main()
{
    int n;
    cout << "\nEnter the number" << endl;
    cin >> n;
    cout << endl << n << "!=" << fact(n);

    return 0;
}
