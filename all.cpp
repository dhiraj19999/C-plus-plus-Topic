Encapsulation: 
it is wrapping up of data and member function in a single class ie data member and memeber fun declration in a single class
it is useful in data hiding that is by using private acess specifier

Polymorphisum: it is ablity of objects to take an differnt forms or behave differntly depend on context in which they are used

for example constructor overloading like parametrized constructor and non paramterized constructor 
two types  compile time and run time polymorphisum  
function and constructor overloading is a compile time polymorphisum
operator overloading is also compile time polymorphisum
operator overlaoding means adding extra functanility to operator without changing its original meaning

#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload + operator to add two objects
    Point operator+(const Point& other) {
        return Point(x + other.x, y + other.y);
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(2, 3), p2(4, 5);
    Point result = p1 + p2; // Adding two objects
    result.display(); // Output: (6, 8)
    return 0;
}


 function overriding is a run time polymorphisum
unction overriding is a type of polymorphism in which we redefine the member function of a class which it inherited from its base class. 
The function signature remains same but the working of the function is altered to meet the needs of the derived class. So, when we call 
the function using its name for the parent object, the parent class function is executed. But when we call the function using the child 
object, the child class version will be executed.

#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Display from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() { // Overrides the Base class method
        cout << "Display from Derived class" << endl;
    }
};

int main() {
    Derived d;
    d.display(); // Calls the Derived class method
    return 0;
}


 virtual function in C++ is a member function in a base class that can be overridden in a derived class and supports runtime polymorphism.
It allows the program to decide at runtime which function to invoke, based on the actual type of the object being referenced, not the type 
of the pointer or reference.
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() { // Virtual function
        cout << "Display from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override { // Overrides the Base class method
        cout << "Display from Derived class" << endl;
    }
};

int main() {
    Base* obj;    // Pointer to Base class
    Derived d;
    obj = &d;

    obj->display(); // Calls the Derived class method because of the virtual function
    return 0;
}



 pure virtual function in C++ is a function that is declared in a base class but is not defined there. It is used as a placeholder and is
intended to be overridden in derived classes. 
An abstract class in C++ is a class that cannot be instantiated directly. It is designed to serve as a base class and is meant to be 
inherited. Abstract classes are typically used to define an interface for derived classes.

An abstract class contains at least one pure virtual function (a virtual function declared with = 0).
Key Characteristics of Abstract Classes:
Contains Pure Virtual Functions: At least one function is declared as virtual and assigned = 0.
Example: virtual void functionName() = 0;

Cannot Instantiate: You cannot create objects of an abstract class.

Serves as a Base Class: Derived classes must implement the pure virtual functions to become concrete classes.
#include <iostream>
using namespace std;

class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Non-pure virtual or concrete function (optional)
    void description() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override { // Override the pure virtual function
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() override { // Override the pure virtual function
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    shape1->draw(); // Output: Drawing a circle.
    shape2->draw(); // Output: Drawing a square.

    delete shape1;
    delete shape2;

    return 0;
}
When to Use Abstract Classes:
When you need to define a common interface for a group of related classes.
