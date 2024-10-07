// Array of objects using pointers

#include<iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
    void getdata(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }

    void setdata(int a, int b){
        real = a;
        imaginary = b;
    }
};
int main(){
    complex *ptr = new complex[4];
    ptr->setdata(11,12);
    ptr->getdata();

    ptr[1].setdata(13,14);  //another way
    ptr[1].getdata();
    
    ptr[2].setdata(15,16);
    ptr[2].getdata();
    
    ptr[3].setdata(17,18);
    ptr[3].getdata();
    return 0;
}