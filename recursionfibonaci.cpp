//**************FIBONACCI SERIES USING RECURSION***********************
#include<iostream>
using namespace std;

int fibonacci(int x){
    if(x<2){
        return 1;
    }
    else{
        return fibonacci(x-1) + fibonacci(x-2);
    }

}

int main(){
    int n;
    cout<<"Enter no. of terms";
    cin>>n; 
    for(int i=0;i<n;i++){
        cout<<" "<<fibonacci(i);
    }   
    return 0;
}