// ********demonstration of constructors calling order using inheritance************
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
#include<iostream>
using namespace std;

class base1{
    int data1;
    public:
    base1(int p){
        data1 = p;
        cout<<"base1 class constructor called "<<endl;
    }
    void printdatabase1(void){
        cout<<"base1 val is "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(int p){
        data2 = p;
        cout<< "base2 class constructor called "<<endl;
    }
    void printdatabase2(void){
        cout<<"base2 value is "<<data2<<endl;
    }
};

class derived : /*public base1 , public base2{*/ public base2 , public base1 {// --> now the order of calling of contructor will change 
    int derived1,derived2;
    public:
    derived(int a, int b, int c, int d) : base2(b) , base1(a){ 
        //no change in constructor calling order if we change the orders of base class here, 
        //but the order of calling constructor will change if we change calling base classes 
        //order while inheriting it in derived class.
        derived1 = c;
        derived2 = d;
    }
    void printdataderived(void){
        cout << "derived 1 value is "<<derived1<<endl;
        cout << "derived 2 value is "<<derived2<<endl<<endl;
    }
};

int main(){
    derived harry(1, 2, 3, 4);
    harry.printdatabase1();
    harry.printdatabase2();
    harry.printdataderived();
    return 0;
}