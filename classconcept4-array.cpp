#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int i;

public:
    void initcounter()
    {
        i = 0;
    }
    void setprice();
    void dispprice();
};
void shop::setprice()
{
    cout << "Enter id for item no. " << i + 1 << endl;
    cin >> itemid[i];
    cout << "Enter price of item " << i + 1 << endl;
    cin >> itemprice[i];
    i++;
}
void shop::dispprice()
{
    for (int j = 0; j < i; j++)
    {
        cout << "The price of item id " << itemid[j] << " is " << itemprice[j] << endl;
    }
}
int main()
{
    shop x;
    x.initcounter();
    x.setprice();
    x.setprice();
    x.setprice();
    x.dispprice();
    return 0;
}