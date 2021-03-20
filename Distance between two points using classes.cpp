#include <bits/stdc++.h>
using namespace std;
class point
{
    int x, y;

public:
    //Creating a friend function to grant the access to the private members of the class and supplying two arguments of the type point
    friend void dis(point p1, point p2);
    //Constructor to assign the values of the arguments to the private members
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    //Function to display the coordinates of the point
    void display()
    {
        cout << "\nPoint ="
             << "(" << x << "," << y << ")" << endl;
    }
};
//Function to calculate the distance two objects of the type point have been passed as arguments
void dis(point p1, point p2)
{
    int xdiff = p1.x - p2.x;
    int ydiff = p1.y - p2.y;
    float dis = sqrt(pow(xdiff, 2) - pow(ydiff, 2));
    cout << "\nDistance between two points=" << dis << endl;
}
int main()
{
    point p3(1, 2), p4(1, 2);
    //Declaration of the variables of the type point and invoking the display and dis functions
    p3.display();
    p4.display();
    dis(p3, p4);
    return 0;
}
