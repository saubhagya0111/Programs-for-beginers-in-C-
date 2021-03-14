#include <bits/stdc++.h>
using namespace std;
//Created a class binary and member functions to perform operatins
class binary
{
    string s;

public:
    void bin();//To take the input
    void chk_bin();//To check if the number is binary
    void change();//To change the string as per the criteria
    void display();//To display the string after changing 
};
void binary::bin()
{
    cout << "\nEnter a binary number" << endl;
    cin >> s;
}
void binary::change()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        }
        else if (s[i] == '1')
        {
            s[i] = '0';
        }
    }
}
void binary::display()
{
    cout << "\nString after performing operations is=" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
}
void binary::chk_bin()
{
    int c = 0, i = 0;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == '0' || s[i] == '1')
        {
            c++;
        }
    }
    if (c == i)
    {
        cout << "\nBinary Number";
    }
    else if (c < i)
    {
        cout << "\nNot a binary number";
    }
}
int main()
{
    binary b;
    b.bin();
    b.chk_bin();
    b.change();
    b.display();
    return 0;
}
