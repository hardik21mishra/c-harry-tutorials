#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string st2;
    ifstream in("sample60b.txt"); // Read operation

    if (!in.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    getline(in, st2);
    cout << st2 << std::flush;

    in.close(); // Close the file explicitly
    cout<<"jj";

    return 0;
}
