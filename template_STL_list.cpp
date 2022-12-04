#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst)
{
    list<int> ::iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1; //list of length zero
    list<int> list2(4); //list of length 4
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(9);
    list1.push_back(12);
    list1.pop_back(); //removed last element from the back, similarly pop front removes first element from the front
    /*
    list<int>::iterator iter;
    iter = list1.begin();
    for (int i = 0; i < list1.size(); i++)
    {
        cout<<*iter<<" ";
        *iter++;
    }
    */
   display(list1);
   list<int>::iterator iter;
   iter = list2.begin();
   for (int i = 0; i < list2.size(); i++)
   {
       *iter=i; //asigning value
       *iter++; 
   }
   display(list2);
   
   return 0;
    
}