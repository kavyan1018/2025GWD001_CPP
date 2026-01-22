#include<iostream>
#include<fstream>
using namespace std;

int main()
{


    // r, w, a  
    
    // --> ofstream -> write to file 
    // --> ifstream -> read to file
    // --> fstream -> read + write 

    ofstream fout;

    fout.open("Data.txt");


    fout << "Hello C++ File Handaling" << endl;
    fout << "Welcome to File";

    fout.close();

    return 0;
}


