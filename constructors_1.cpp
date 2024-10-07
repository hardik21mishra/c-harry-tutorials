#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created

    complex(void); // constructor declaration

    void printno()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
complex::complex(void) // ----> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 20;
}
int main()
{
    complex p, q, r, s;
    p.printno();
    q.printno();
    r.printno();
    s.printno();
    return 0;
}

// characterstis of constructors:

// 1. They should be declared in the public section of the class 
// 2. They are automatically invoked whenever a obect is created
// 3. They cannot return values and do not have a return types
// 4. It can have default arguments
// 5. We cannot refer to their address