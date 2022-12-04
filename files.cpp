#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
/*
The useful classes for working with files which are included in fstream library
fstreambase
ifstream
ofstream
*/
// two ways to open file
// using contructor and using member function open() of the class

int main()
{
    string st = "C++ writing into this file"; //opening using contructor and writing it
    ofstream out("samplefile.txt"); // to write into the file
    out<<st;
    // Now lets check how to read from file
    string st2;
    ifstream in("samplefile1.txt"); //to read from file
    //in>>st2; //only gets first word
    getline(in, st2); //to read first line
    getline(in, st2);
    cout<<st2<<endl;
    return 0;
}