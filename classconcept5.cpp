#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    int setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    int setdatabysum(complex p, complex q)
    {
        a = p.a + q.a;
        b = p.b + q.b;
    }
    void printcomplexnumsum()
    {
        cout << "The sum of complex numbers is: " << a << "+" << b << "i" << endl;
    }
    void printcomplexnum()
    {
        cout << "The complex number is: " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printcomplexnum();

    c2.setdata(4, 3);
    c2.printcomplexnum();

    c3.setdatabysum(c1, c2);
    c3.printcomplexnumsum();
    return 0;
}