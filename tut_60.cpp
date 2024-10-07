#include<iostream>
#include<fstream>

// These are some useful classes for working with files in C++

// fstreambase
// ifstream --> derived from fstreambase
// ofstream --> derived from fstreambase

using namespace std;

int main(){
    // ofstream mat("sample60.txt"); //opening
    // // string z = "I am Hardik Mishra and apparently I belong jj to gen z lollll ";
    // mat<<"I am Hardik Mishra and apparently I belong jjkl to gen z lollll ";
    string st2;
    ifstream lol("sample60b.txt"); 
    // lol>>st2;
    getline(lol, st2);
    cout<<st2;
    
    return 0;
}