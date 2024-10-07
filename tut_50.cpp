#include<iostream>
using namespace std;

int main(){
    int a = 69;
    int *ptr = &a;
    // hecout<<"The value of a directly is "<<a<<endl;
    // cout<<"The value at address stored in pointer ptr is "<<*ptr<<endl;


    // new keyword
    int *p = new int(99);   // dynamically initalizing
    float *q = new float(99.99);   // dynamically initalizing
    char *r = new char('H');
    // cout<<"The int value at address p is "<<*p<<endl;
    // cout<<"The float value at address q is "<<*q<<endl;
    // cout<<"The char value at address r is "<<*r<<endl;

    // dynamically initializing an array using new keyword
    int *arr = new int[3];
    // int *arr = new int[3] {10,20,30};  //or //dynamically initializing values in an 
                                               //array or second method rather than using arr[0]=10;

    arr[0] = 10;
    *(arr+1) = 20; // arr[1] = 20;
    arr[2] = 30;
    //delete keyword: deletes the value 
    delete[] arr; // delete arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    return 0; 
    }