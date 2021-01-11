#include<iostream>
#include<math.h>
using namespace std;
/* C++ program to build a calculator using switch case*/ 
int main()
{
    int ch,n1,n2;
    cout<<"\n Enter the two numbers";
    cin>>n1>>n2;
    /* Displaying menu to seek choice from the user*/
    cout<<"\n Enter the choice \n 1.addition \n2.Subtraction \n 3.Division \n 4.Multiplication";
    cin>>ch;
    /* Using switch case to calculate the result with use of break statement*/
    cout<<"\n result=";
    switch (ch)
    {
    case 1: cout<<n1+n2; 
        break;
    case 2:cout<<n1-n2;
        break;
    case 3: cout<<n1/n2;
        break;
    case 4: cout<<n1*n2;
         break;
    default:cout<<"\n Invalid Input";
        break;
    }
    return 0; 
}
