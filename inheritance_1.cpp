#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpid){
        id = inpid;
        salary = 34;
    }
    Employee(){}
};
class programmer : public Employee{
    public:
    int lanuageCode;
    programmer(int inpid){
        id = inpid;
        lanuageCode = 9;
    }
    void getdata(){
        cout<<id<<endl;
    }

};
int main(){
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillF(10);
    cout<<skillF.lanuageCode<<endl;
    skillF.getdata();
    cout<<skillF.id;
    return 0;
}