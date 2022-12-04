#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream out; //out is object, it can have any name you desire
    out.open("samplefile1.txt"); //file opening using member function
    out<<"this is test\n";
    out<<"this is test\n";
    out<<"this is test\n";
    out<<"this is test\n";
    out.close();
    ifstream in;
    string st;
    in.open("samplefile1.txt");
    //getline(in,st); //to get line, only one
    //cout<<st<<endl; 
    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}