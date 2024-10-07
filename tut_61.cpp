#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("sample60b.txt");
    string st = "hello yo";
    out << st;
    return 0;
}