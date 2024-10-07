#include<iostream>
using namespace std;
double fact(int a){
    if(a<=1){
    return 1;
    }
return a*fact(a-1);
}
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"The factorial of "<<x<<" is " <<fact(x);
    return 0;  
}