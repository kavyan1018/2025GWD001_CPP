// Default constructor

// header file
#include<iostream>
using namespace std;

class Student{

    public :
        string name;
        int age;


    // Default constructor
    Student(){
        name = "Bhavya";
        age = 20;
    }
};


int main()
{
    Student s1; // default cobstructure called 
    // display

    cout << s1.name << endl;
    cout << s1.age << endl;
}