#include <iostream>
using namespace std;
class shop
{
    int itemprice[100];
    int itemid[100];
    int counter;

public:
    void setprice(void);
    void displayprice(void);
    void counters(void) { counter = 0; }
};
void shop ::setprice(void)
{
    cout << "Enter the id of item no. " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter the price of item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of item with item id   " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    shop polo;
    int a;
    cout << "Enter number of items you have to register" << endl;
    cin >> a;
    polo.counters();
    for (int i = 0; i < a; i++)
    {
        polo.setprice();
    }
    polo.displayprice();
    return 0;
}