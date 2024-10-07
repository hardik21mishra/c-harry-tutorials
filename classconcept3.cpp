// **********************NESTING OF MEMBER FUNCTIONS**********************

#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_complement(void);
    void display(void);
};
void binary::read(void)
{
    cout << "Enter a number: ";
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    // s.length() gives the no. of charaters in a string where s is the string
    // whom length we want to determine.
    // size() can be used as alternative in place of length() as syntax:s.size()
    // we cannot use strlen() function to count size as it is a c library function
    // and counts the characters till the null character '\0'
    // Using strlen() would not work correctly and could lead to undefined behavior

    {
        if ((s.at(i)) != '1' && (s.at(i)) != '0')
        // s.at(i) can also be written as s[i] is used to acces a character on a
        // particlar position in a sharacter array or string
        // for example: let "HELLO" be a character array stored in string s,
        // then if i=1, then s[1] or s.at(1) = E.
        {
            cout << "Not a binary number.";
            exit(0); // ---->this line terminates the program

            // The argument 0 passed to exit() indicates a successful termination
            // of the program. In other words, it signals that the program finished
            // executing without encountering any errors.
            // any code after the exit(0) line will not be executed
        }
    }
}

void binary::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

void binary::ones_complement(void)
{
    chk_bin(); // ----> Nesting of member functions
    // the above function will execute without the consent or knowlede of user and user
    // cannot modify or use the chk_bin() function in main() directly, as it is private.
    // therefore class is more secure than structures.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
    cout << "ones complement of the binary is: ";
}

int main()
{
    binary d;
    d.read();
    d.ones_complement();
    d.display();
    return 0;
}