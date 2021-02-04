#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,rem;
    /* Each vaiable corresponds to frequency of a number a/b/c/d/e/f/g/h/i/j=1/2/3/4/5/6/7/8/9/0*/
    int n;
    /* Variable declared to seek input from the user*/
    cout<<"\n Enter the number";
    cin>>n;
    int t=n;
    /* Temporary variable equals to the number*/
    while (t!=0)
    {
        rem=t%10;
        /* Calculating the remainder from the number and using the if condition to check the frequency of each integer*/
        if (rem==0)
        {
            j++;
        }
        else if (rem==1)
        {
            a++;
        }
        else if (rem==2)
        {
            b++;
        }
        else if (rem==3)
        {
            c++;
        }
        else if (rem==4)
        {
            d++;
        }
        else if (rem==5)
        {
            e++;
        }
       else if (rem==6)
       {
           f++;
       }
       else if (rem==7)
       {
           g++;
       }
       else if (rem==8)
       {
          h++;
       }
       else if (rem==9)
       {
          i++;

       }    
       t/=10;      
    }
    /*Displaying the value of the resultant variable*/
    cout<<"\n frequency of 0="<<j;
     cout<<"\n frequency of 1="<<a;
    cout<<"\n frequency of 2="<<b;
    cout<<"\n frequency of 3="<<c;
    cout<<"\n frequency of 4="<<d;
    cout<<"\n frequency of 5="<<e;
    cout<<"\n frequency of 6="<<f;
    cout<<"\n frequency of 7="<<g;
    cout<<"\n frequency of 8="<<h;
    cout<<"\n frequency of 9="<<i;
    
     return 0;

    
}
