#include <bits/stdc++.h>
using namespace std;
int sum(int n1,int n2)
{
    static int c=9;//This line will run only once and will not be executed again
    c+=1;//Value of c from the time when function is called 2nd time will be c=10 & 3rd case will be c=11 and so on
    //c+=2;
    return n1+n2+c;
}
//On using static variable output is 18,19,20,21,22 and without static variable the values are 18,18,18,18,18
int main()
{
 int a=4,b=4;
 cout<<"\nSum="<<sum(a,b);
 cout<<"\nSum="<<sum(a,b);
 cout<<"\nSum="<<sum(a,b);
 cout<<"\nSum="<<sum(a,b);
 cout<<"\nSum="<<sum(a,b);

return 0;

}
