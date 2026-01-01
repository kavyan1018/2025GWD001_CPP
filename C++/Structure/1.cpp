// Student structure rl, name, marks

#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string Name;
    int marks;
};

int main()
{
    struct Student s;

    cout << "Enter The Roll Number :";
    cin >> s.rollNo;

    cout << "Enter The Name :";
    cin >> s.Name;

    cout << "Enter The Marks :";
    cin >> s.marks;
    
    
    
    cout << "Your Roll Number is :" << s.rollNo << endl; 
    cout << "Your Name is :" << s.Name << endl;
    cout << "Your Marks is :" << s.marks << endl;
}