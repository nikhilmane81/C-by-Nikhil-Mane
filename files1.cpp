#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("samplefile.txt");
    cout<<"Enter the text here ";
    string name;
    cin>>name;
    out<<"name is " + name;
    out.close(); //to close the file, have to do if same file being read or write again in same program
    string st;
    ifstream in("samplefile.txt");
    getline(in, st);
    cout<<st<<endl;
    in.close();
    return 0;
}