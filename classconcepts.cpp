#include<iostream>
using namespace std;

class sum{
    public:
      int add(int fstval,int secval);
};

int sum::add(int fstval,int secval){
    return fstval+secval;
}

int main(){
    sum s;
    cout<<s.add(27,84);
    return 0;
}

