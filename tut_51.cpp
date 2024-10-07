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
    // complex c1;
    // c1.setdata(11,12);
    // c1.getdata();
    
    // complex c1;
    // complex (*ptr) = &c1;
    // (*ptr).setdata(11,12);
    // (*ptr).getdata();

    complex (*ptr) = new complex;
    (*ptr).setdata(11,12);
    // (*ptr).getdata();
    // (*ptr).getdata(); is exactly same as ptr->getdata();
    // "->" operator means: iss pointer ko derefrence karo
    ptr->getdata();
    
    return 0;
}