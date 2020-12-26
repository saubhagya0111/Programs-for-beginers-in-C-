#include<iostream>
#include<conio.h>
#include<math.h>
/* C++ program to perform operations pertaining to a rectangle*/
using namespace std;
int main()
{
    int l,b,ch;
    float d,a,p;
    cout<<"\n Enter the length and breadth"<<endl;
    cin>>l>>b;
    cout<<"\n Enter the choice \n 1.Area \n 2.Perimeter \n 3.Diagonal"<<endl;
    cin>>ch;
    if(ch==1)
    {
        a=l*b;
        cout<<"\n Area="<<a<<endl;
         }
         else if(ch==2)
         {
             p=2*(l+b);
             cout<<"\n Perimeter="<<p<<endl;
         }
         else if(ch==3)
         {
             d=pow((l*l)+(b*b),0.5);
             cout<<"\n Diagonal="<<d<<endl;
         }
         else 
         cout<<"\n Invalid Input"<<endl;


}
