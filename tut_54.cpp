// ************************************* POLYMORPHISM **********************************************

#include <iostream>

using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying base class variable var_base: " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying base class variable var_base: " << var_base << endl;
        cout << "Displaying base class variable var_derived: " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_ptr;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_ptr = &obj_derived; // therefore base class pointer can point
                                   // towards derived class object.
                                   // but we cannot run function of derived class if we
                                   // are pointing a base class ptr to derived class object

    (*base_class_ptr).var_base = 40; // base_class_ptr->var_base = 40; // correct
    base_class_ptr->display();       // correct //only base class display will run as base class pointer
                                     // dont have access to derived class member functions or variables

    // base_class_ptr->var_derived; //will throw an error

    DerivedClass *derived_class_ptr;
    derived_class_ptr = &obj_derived;
    derived_class_ptr->var_derived = 69;
    derived_class_ptr->display();

    return 0;
}

// Base class pointer cannot access derived class variables or member functions


/* FROM CHAT GPT
In your code, you have a base class (BaseClass) and a derived class (DerivedClass).
The DerivedClass is inherited from the BaseClass. This inheritance relationship allows
you to use polymorphism.

Here's how polymorphism works in your code:

Function Overriding: Both the base class (BaseClass) and the derived class (DerivedClass) have a function
 named display(). In the derived class, you've provided a new implementation of the display() 
 function, which overrides the one in the base class.

cpp
Copy code
void display()
{
    cout << "Displaying base class variable var_base: " << var_base << endl;
    cout << "Displaying base class variable var_derived: " << var_derived << endl;
}

This is important because it allows objects of the derived class to have their own 
version of the display() function while still being able to use the same function name.

Pointer Polymorphism: In your main() function, you create a pointer of the base class type 
(BaseClass *base_class_ptr;) and assign it to an object of the derived class (DerivedClass obj_derived;). 
This is allowed because of the "is-a" relationship between the base and derived classes.

cpp
Copy code
base_class_ptr = &obj_derived;

This is a crucial aspect of polymorphism. Even though the pointer is of the base class type, it can
point to objects of both the base class and the derived class. This allows you to treat objects of
the derived class as if they were objects of the base class.

Polymorphic Function Call: When you call the display() function using base_class_ptr, it will call 
the version of the function associated with the object it points to. In this case, it calls the 
display() function of the derived class because base_class_ptr is pointing to an object of the 
derived class.

cpp
Copy code
base_class_ptr->display();

This demonstrates polymorphism. Despite having a pointer of the base class type, it calls the derived 
class's display() function because the object it points to is of the derived class.

In simple terms, polymorphism allows you to treat objects of derived classes as if they were objects
of the base class. It allows you to use a common interface (in this case, the display() function) 
while having different implementations for each derived class. This makes your code more flexible 
and extensible, as you can add new derived classes without changing the code that uses the base 
class pointers
*/