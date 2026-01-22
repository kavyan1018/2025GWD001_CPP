#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream a;
    string text;

    a.open("Data.txt");

    while (getline(a, text))
    {
        cout << text << endl;
    }
    
    a.close();
}