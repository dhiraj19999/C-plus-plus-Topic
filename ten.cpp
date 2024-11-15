What is Function Overriding in C++?
Function overriding is a type of polymorphism in which we redefine the member function of a class which it inherited from its base class. The function signature remains same but the working of the function is altered to meet the needs of the derived class. So, when we call the function using its name for the parent object, the parent class function is executed. But when we call the function using the child object, the child class version will be executed.


// C++ Program to illustrate how to implement runtime
// function overriding using virtual function
#include <iostream>
using namespace std;

class Base {
public:
    // Declare the function as virtual to allow overriding
    // in derived classes
    virtual void display()
    {
        cout << "Display method of Base class" << endl;
    }

    // Virtual destructor to ensure proper cleanup of
    // derived class objects
    virtual ~Base() {}
};

class Derived : public Base {
public:
    // Override the display method
    void display() override
    {
        cout << "Display method of Derived class" << endl;
    }
};

int main()
{
    Base* basePtr;
    Derived derivedObj;

    // Point base class pointer to derived class object
    basePtr = &derivedObj;

    // Call the display function
    // This will call the display method of the Derived
    // class due to the virtual function mechanism
    basePtr->display();

    return 0;
}


output= Display method of Derived class




Sometimes implementation of all functions cannot be provided in a base class because we don’t know the implementation. Such a class is called an abstract class.For example, let Shape be a base class. We cannot provide the implementation of function draw() in Shape, but we know every derived class must have an implementation of draw(). Similarly, an Animal class doesn’t have the implementation of move() (assuming that all animals move), but all animals must know how to move. We cannot create objects of abstract classes.

A pure virtual function (or abstract function) in C++ is a virtual function for which we can have an implementation, But we must override that function in the derived class, otherwise, the derived class will also become an abstract class. A pure virtual function is declared by assigning 0 in the declaration



// C++ program to illustrate the abstract class with pure
// virtual functions
#include <iostream>
using namespace std;

class Test {
    // private member variable
    int x;

public:
    // pure virtual function
    virtual void show() = 0;

    // getter function to access x
    int getX() { return x; }
};

int main(void)
{
    // Error: Cannot instantiate an abstract class
    Test t; // we can't make object of abstract class

    return 0;
}









class A    // Abstract Class
{
public:
void showMyProfile()
{
cout << "LOVELY PROFESSIONAL UNIVERSITY" << endl ; 
}
virtual void showA() = 0 ;  // Pure Virtual Function 
};

class B : public A
{
public:
 void showA() { cout << "This is showA in class B \n"; }
};

/*
class C : public A 
{
public:
 void showA() { cout << "This is showA in class B \n"; }
};
*/

int main()
{
B obj ; 
obj.showMyProfile() ; 
obj.showA();

return 0;
}





A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the method.



// C++ program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

class base {
public:
    virtual void print() { cout << "print base class\n"; }

    void show() { cout << "show base class\n"; }
};

class derived : public base {
public:
    void print() { cout << "print derived class\n"; }

    void show() { cout << "show derived class\n"; }
};

int main()
{
    base* bptr;
    derived d;
    bptr = &d;

    // Virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();

    return 0;
}



print derived class
show base class