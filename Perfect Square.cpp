#include <bits/stdc++.h>
using namespace std;
/* Link for the templates:-
https://github.com/saubhagya0111/Programs-for-beginers-in-C-/blob/main/General%20Template.cpp
https://github.com/saubhagya0111/Programs-for-beginers-in-C-/blob/main/Template%20for%20CP.cpp */
#define incr_loop(a, b) for (int i = a; i < b; i++)
#define decr_loop(a, b) for (int i = b; i > a; i--)
typedef long long ll;
#define in(x) cin >> x;
#define out(x) cout << x;
#define line cout << endl;
#define string_in(x) getline(cin, x)
#define f first
#define s second
typedef vector<int> vi;
typedef vector<char> vc;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
bool is_perfect(int n)
{
    int root = sqrt(n);
    //If the square root of the integer is an int and the corresponding product yields the number it will be a perfect square
    /* Illustration:- 
    1. Square root of 3 is 1.73 but as the data type is integer so the value will be 1 and since the product will be 1 so the function will return 0 (false condition)
    2.On the contrarory when the input is 4 the condition will be satisfied and it will return 1 (true value) as the consdition is satisfied*/
if ((root * root) == n)
{
    return 1;
    }
    else
    {
        return 0;
    }
    
}
void solution()
{
    int i, j, n, m;
    int perfect = is_perfect(n);
    if (perfect==1)
    {
        out("perfect square\n");
    }
    else if (perfect==0)
    {
        out("Not a perfect square\n");
    }
    
}
int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    solution();

    return 0;
}
