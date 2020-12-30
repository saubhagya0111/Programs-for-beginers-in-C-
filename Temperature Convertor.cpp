#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
/*C++ program to create a temperature convertor*/
int main()
{
    float k,c,f;
    /*Explanation of variables:- kc/c/f:Temperature in Kelvin?Celsius/Fahrenheit*/
    int ch;
    /*Variable to seek input of the choice from the user ch=choice*/
    cout<<"\n Enter the choice \n 1.Kelvin to Celsius \n 2. Celsius to Kelvin \n 3.Fahrenheit to Celsius \n 4. Celsius to Fahrenheit  ";
    cin>>ch;
    /* Using if else ladder in the program to deal with possible cases*/
    if(ch==1)
    {
        cout<<"\n Enter the temperature in Kelvin";
        cin>>k;
        c=k-1273;
        cout<<"\n Temperature in Celsius="<<c;
    }
    else if(ch==2)
    {
        cout<<"\n Enter the temperature in Celsius";
        cin>>c;
        k=273+c;
        cout<<"\n Temperatue in Kelvin="<<k<<endl;
    }
    else if(ch==3)
    {
        cout<<"\n Enter the temperature in Fahrenheit "<<endl;
        cin>>f;
        c=(f-32)*0.56;
        cout<<"\n Temp in Celsius="<<c;

    }
    else if(ch==4)
    {
        cout<<"\n Enter the temperature in Celsius"<<endl;
        cin>>c;
        f=(1.8*c)+32;
        cout<<"\n Temp in Fahrenheit="<<f<<endl;

    }
    else 
    cout<<"\n Invalid Input";
    return 0;

}
