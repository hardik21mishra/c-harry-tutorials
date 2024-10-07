// ************swapping two numbers using classes and friend functions**************
#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 *x, c2 *y);
    // alternative:
    // friend void exchange(c1 &x,c2 &y);
public:
    void inData(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 *x, c2 *y);
    // alternative:
    // friend void exchange(c1 &x,c2 &y);
public:
    void inData(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << val2 << endl;
    }
};

void exchange(c1 *x, c2 *y)
{
    int temp = x->val1;
    x->val1 = y->val2;
    y->val2 = temp;
}

// alternative:
// void exchange(c1 &x,c2 *&y){
//     int temp = x.val1;
//     x.val1=y.val2;
//     y.val2=temp;

int main()
{
    c1 p;
    c2 q;
    p.inData(6);
    q.inData(9);
    exchange(&p, &q);
    // alternative:
    // exchange(p,q);
    cout << "The value of c1 after swapp: ";
    p.display();
    cout << "The value of c2 after swapp: ";
    q.display();

    return 0;
}

// all the commented out part in the alternative comment title is the alternative program
// that can be uncommented and run it is basically the call by pointer alternate method
// in call by pointer . dot operator should be replaced by -> arrow operator
// video number 28: More on C++ Friend Functions (Examples & Explanation) | C++ Tutorials for Beginners #28