#include <bits/stdc++.h>
using namespace std;
//Use of typedef keyword to assign an alternate name to the data type (here structure)
//Declaring a structure so as to store the details of the students
typedef struct student
{
    int admno;
    string fname;
    string lname;
    int age;
    int standard;

} stu;

int main()
{
    //Declaring a variable of data type student
    stu s;
    cout << "\nEnter the first name";
    cin >> s.fname;
    cout << "\nEnter the last name";
    cin >> s.lname;
    cout << "\nEnter the Admission Number";
    cin >> s.admno;
    cout << "\nEnter the age";
    cin >> s.age;
    cout << "\nstandard";
    cin >> s.standard;
    cout << "\nfirst name";
    cout << s.fname;
    cout << "\nlast name";
    cout << s.lname;
    cout << "\nAdmission Number";
    cout << s.admno;
    cout << "\n age";
    cout << s.age;
    cout << "\nstandard";
    cout << s.standard;
    return 0;
}
