// *******SINGLE INHERITANCE EXAMPLE*********

#include<iostream>
using namespace std;
class base{
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base :: setdata(){
    data1 = 10;
    data2 = 20;
}
int base :: getdata1(){
    return data1;
}
int base :: getdata2(){
    return data2;
}

class derived : public base{    // (or) private in place of public  
    int data3;
    public:
    void process();
    void display();
};
void derived :: process(){
    // setdata(); //(or)
    data3 = data2 * getdata1();
}
void derived :: display(){
    cout<<"The value of data1 = "<<getdata1()<<endl;
    cout<<"The value of data2 = "<<data2<<endl;
    cout<<"The value of data3 = "<<data3<<endl;
}
int main(){
    derived der;
    der.setdata();  // (or) comment this line out to write it in process() definition as it became private after changing the visibility 
    der.process();
    der.display();

    return 0;
}