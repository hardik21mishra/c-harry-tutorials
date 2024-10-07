// Array of Objects Using Pointers in C++

#include<iostream>
using namespace std;

class shopitem{
    int id;
    float price;
    public:
    void setdata(int a, float b){
        id = a;
        price = b;
    }
    void getdata(void){
        cout<<"Code of this item is "<<id<<endl;
        cout<<"price of this item is "<<price<<endl;
    }
};
int main(){
    int size = 4, i, p;
    float q;
    //general item
    //veggies item 
    //hardware item
    shopitem *ptr = new shopitem[size];
    shopitem *ptrTemp = ptr;
    for(i=0;i<size;i++){
        cout<<"Enter id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for(i=0;i<size;i++){
        cout<<"item id: "<<i+1<<endl;
        ptrTemp->getdata();
        ptrTemp++;
    }
    return 0;
}

            //   1    2    3    garbage
            //   ^              ^
            //   |              |
            //   |              |
            //   |              |
            //   ptrTemp        ptr

// since we doing ptr++ therefore at the end of setdata loop ptr value
// will exceed 3 and if we use same variable ptr in getdata loop as ptr++
// we will get garbage value in output, therefore we made a  new pointer 
// named ptrTemp and made it equal to ptr when it is at 0
// so whenever we use ptrTemp it will start from 0 while ptr has gone beyond 3