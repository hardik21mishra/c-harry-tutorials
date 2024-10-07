// ********** MULTILEVEL INHERITANCE SIMPLEST EXAMPLE ************

#include <iostream>
using namespace std;

class student
{
protected:
    int id;

public:
    void setid(int q)
    {
        id = q;
    }
    void getid()
    {
        cout << "ID of student is: " << id << endl;
    }
};

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "Maths marks: " << maths << endl;
        cout << "Physics marks: " << physics << endl;
    }
};

class result : public exam
{
    float percentage;

public:
    void display_result()
    {
        getid();
        get_marks();
        cout << "Your Result is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    result harry;
    harry.setid(420);
    harry.set_marks(94.0, 90.0);
    harry.display_result();
    return 0;
}