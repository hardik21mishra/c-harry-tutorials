// ****************************FUNCTION OVERLOADING*******************************
#include <iostream>
using namespace std;

int area(int x)
{
    return (3.14 * x * x);
}
int area(int y)
{
    return (y * y);
}
int area(int a, int b)
{
    return (a * b);
}
int main()
{
    cout << "The area of circle is: " << area(4) << endl;
    cout << "The area of square is: " << area(3) << endl;
    cout << "The area of rectangle is: " << area(5, 4) << endl;
    return 0;
}

// therefore the above program is generating error because there can be two
// functions with same name but not with same amount of parameters
