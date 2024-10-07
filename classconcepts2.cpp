#include <iostream>
using namespace std;
class student
{
private:
  int rollno;
  string religion;

public:
  int standard, age;
  string name;
  void setdata(int x, string y);
  void getdata()
  {
    cout << "Roll number: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Standard: " << standard << endl;
    cout << "age: " << age << endl;
    cout << "Religion: " << religion << endl;
  }
};
void student::setdata(int x, string y)
{
  rollno = x;   // x=rollno -----> Incorrect
  religion = y; // y=religion ---> Incorrect
}
int main()
{
  student hardik;
  hardik.name = "Harry";
  hardik.standard = 10;
  hardik.age = 14;
  hardik.setdata(23, "Hindu");
  hardik.getdata();
  return 0;
}