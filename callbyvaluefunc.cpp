//*******************************CALL BY VALUE***********************************

#include<iostream>
using namespace std;
 void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Inside function: "<<"x="<<a <<"\ty="<<b<<endl;
}

int main(){
    int x=2,y=5;
    cout<<"Before swapping: " <<"x="<<x <<"\ty="<<y<<endl;
    swap(x,y);
    cout<<"After swapping: " <<"x="<<x <<"\ty="<<y<<endl;
    return 0;
}