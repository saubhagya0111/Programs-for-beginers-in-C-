#include <bits/stdc++.h>
using namespace std;
// &-->Address of operator *-->Dereference operator
int main()
{
    int n = 5;
    int *b = &n;   //Stores the address of variable n
    int **c = &b;  //Stores the address of pointer b
    int ***d = &c; //Stores the address of pointer c
    //Address of the variable denotes the location at which the variables are stored in the storage
    cout << "\nAddress of n=" << b;
    cout << "\nAddress of b=" << c;
    cout << "\nAddress of c=" << d;
    //Following lines illustrate use of '*' operator displaying the values of variables
    cout << "\nValue stored in b=" << *b;
    cout << "\nValue stored in c=" << **c;
    cout << "\nValue stored in d=" << ***d;

    return 0;
}
