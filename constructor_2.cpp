// Ques. Create a function which takes two point objects and computes
//       the distance between those two points
#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;
    friend void dist(point, point);

public:
    point(int a, int b) // ---> Parameterized constructor
    {                   // point(void) ----> Default constructor
        x = a;
        y = b;
    }
};
void dist(point o1, point o2)
{
    int x = ((o2.x - o1.x) * (o2.x - o1.x));
    int y = ((o2.y - o1.y) * (o2.y - o1.y));
    cout << sqrt(x + y);
}

int main()
{
    point p(1, 0);  // ----> Implicit Declaration
    point q(70, 0); // ----> Implicit Declaration
    // point q = point (70,0);   // ----> Explicit Declaration
    dist(p, q);
    return 0;
}