#include<iostream>
#include<cstring>
using namespace std;
class chw
{
    protected:
        string title;
        float rating;
    public:
        chw(string s, float r)
        {
            title = s;
            rating = r;
        }
        virtual void display(){} //use of virtual function, if not used display function will called from base class always if called from pointer
};
class chwvideo : public chw
{
    float videolength;
    public:
        chwvideo(string s, float r, float v):chw(s,r)
        {
            videolength = v;
        }
        void display()
        {
            cout<<"This videos has title "<<title<<endl
            <<"Rating"<<rating<<endl
            <<"length of video "<<videolength<<endl;
        }
};
class chwtext : public chw
{
    int words;
    public:
        chwtext(string s, float r, int w):chw(s,r)
        {
            words=w;
        }
        void display()
        {
            cout<<"This videos has title "<<title<<endl
            <<"Rating"<<rating<<endl
            <<"No. of words in video "<<words<<endl;
        }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    //for cwh video class
    title = "C++ tutorial";
    vlen = 23.5;
    rating = 4.6;
    chwvideo Cvideo(title, rating, vlen);

    //for chw text class
    title= "C++ tutorial text";
    words = 500;
    rating = 4.9;
    chwtext Ctext(title, rating, words);

    chw *tuts[2]; //using pointer to create two object
    tuts[0]= &Cvideo; //assigning address of object to pointer
    tuts[1]= &Ctext;  // same as above

    tuts[0]->display();    
    tuts[1]->display();    

return 0;
}
/* Rules of virtual function
1. They can not be static.
2. They are accessed by object pointers.
3. virtual function can be friend of another class.
4. A virtual function in base class might not be used.
5. If virtual function is definded in base class then there is no need to define it again in derived classes.
*/