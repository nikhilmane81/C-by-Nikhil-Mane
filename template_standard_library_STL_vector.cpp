#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    vector<int> vec1; //zero length vector
    vector<char>vec2(4); //4 elemement character vector
    vec2.push_back('c'&&'t');
    display(vec2);
    vector<char>vec3(vec2); //4 element character vector from vec2
    display(vec3);
    vector<int>vec4(4,13); // 4- element vector of 13s ==>> 13 13 13 13
    display(vec4);
    vec4.resize(7,6);
    cout<<vec4.size();
    display(vec4);

    /*
    vector <int> v1;
    int element, size;
    cout<<"Enter the size of vector "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter value for vector: "<<endl;
        cin>>element;
        v1.push_back(element);
    }
    display(v1);
    vector <int> ::iterator iter = v1.begin();
    v1.insert(iter+1,4, 54); //+1 stands for at which element it should be inserted, also v1.insert(iter+1, 4, 54) ==> Here 4 stands for number of copies
    display(v1);
    */
    return 0;
}