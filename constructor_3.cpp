#include <iostream>
using namespace std;
class bankDeposit
{
    int p, t;
    float r, rtnval, R;

public:
    bankDeposit() {}
    bankDeposit(int principal, int time, float rate);
    bankDeposit(int principal, int time, int rate);
    void show();
};


bankDeposit::bankDeposit(int principal, int time, float rate)
{
    p = principal;
    t = time;
    r = rate;
    rtnval = principal;
    for (int i = 0; i < time; i++)
    {
        rtnval = rtnval + (principal * rate);
    }
}

bankDeposit::bankDeposit(int principal, int time, int rate)
{
    p = principal;
    t = time;
    R = float(rate)/100;
    rtnval = principal;
    for (int i = 0; i < time; i++)
    {
        rtnval = rtnval + (p * R);
    }
}
//                                                                   ___
// bankDeposit :: bankDeposit(int principal, int time, int rate)        |
// {                                                                    |
//     p = principal;                                                   | 
//     t = time;;                                                       |   
//     R = float(rate)/100;                                             |   
//     rtnval = principal;                                              |----> Alternative constructor
//     for (int i = 0; i < time; i++)                                   |      Logic
//     {                                                                |    
//         rtnval = rtnval * (1+R);                                     |      
//     }                                                                |      
// }                                                                 ___|                   
                                                                               
void bankDeposit::show()
{
    cout << "The return value is " << rtnval << endl;
}

int main()
{
    bankDeposit b1, b2, b3;
    int p, t, R;
    float r;
    cout << "Enter principal: ";
    cin >> p;
    cout << "Enter time: ";
    cin >> t;
    cout << "Enter float rate: ";
    cin >> r;
    b1 = bankDeposit(p, t, r); // DBT: why not b1.bankDeposit(p,t,r);
    b1.show();

    cout << "Enter principal: ";
    cin >> p;
    cout << "Enter time: ";
    cin >> t;
    cout << "Enter int rate: ";
    cin >> R;
    b2 = bankDeposit(p, t, R); // DBT: why not b2.bankDeposit(p,t,R);
    b2.show();
    return 0;
}


// NOTE: Answer of DBT
// In C++:

// 1. Member Function: You use the dot operator (.) to call a member function 
//                     on an existing object.

// 2. Constructor: Constructors are automatically called when you create an 
//                 object using the class name followed by parentheses 
//                 containing the constructor's arguments. You don't use 
//                 the dot operator to directly call a constructor.

