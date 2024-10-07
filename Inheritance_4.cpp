#include<iostream>
using namespace std;

// class DerivedC: visibility-mode base1, visibility-mode base2 (and so on...)
// {
//      Class body of class "DerivedC"
// };

class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int = a;
    }
};
class base3{
    protected:
    int base3int;
    public:
    void set_base3int(int a){
        base3int = a;
    }
};
class derived : public base1, public base2, public base3{
    public:
    void show(){
        cout<<"Base 1 = "<<base1int<<endl;
        cout<<"Base 2 = "<<base2int<<endl;
        cout<<"Base 3 = "<<base3int<<endl;
        cout<<"sum = "<<base1int + base2int + base3int;
    }
};
/*The derived class will look something like this:
  
  Data members:
    base1int() ----> public
    base2int() ----> public
  
  Member functions:
    set_base1int() ----> public
    set_base2int() ----> public
    set_show() ----> public
*/

int main(){
    derived der;
    der.set_base1int(25);
    der.set_base2int(5);
    der.set_base3int(15);
    der.show();
    return 0;
}