#include<iostream>
using namespace std;

// Class def
class Student{

    public:
        // data type 
        int rollNo;
        string name;

        void display()
        {
            cout << "Roll No :" << rollNo << endl;            
            cout << "Name :" << name << endl;            
        }

};

// main
int main()
{   
    // object creation
    Student s1;

    // Assign Value
    s1.rollNo = 101;
    s1.name = "Bhavya";

    // call the method
    s1.display();

    return 0;
}