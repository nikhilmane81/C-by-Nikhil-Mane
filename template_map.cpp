#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string, int> marksmap;
    marksmap["Nikhil"] = 78;
    marksmap["sona"] = 67;
    marksmap["swap"] = 45;
    marksmap.insert( { {"Rohan", 89}, {"Akshat", 46} } );
    map <string, int> :: iterator iter;
    for(iter=marksmap.begin(); iter!=marksmap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
return 0;
}