2Single inheritance is defined as the inheritance in which a derived class is inherited from the only one base class.

#include <iostream>  
using namespace std;  
 class Account {  
   public:  
   float salary = 60000;   
 };  
   class Programmer: public Account {  
   public:  
   float bonus = 5000;    
   };       
int main(void) {  
     Programmer p1;  
     cout<<"Salary: "<<p1.salary<<endl;    
     cout<<"Bonus: "<<p1.bonus<<endl;    
    return 0;  
}  



Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritances. 

Need for Virtual Base Classes: Consider the situation where we have one class A . This class A is inherited by two other classes B and C. Both these class are inherited into another in a new class D 

#include <iostream> 
using namespace std; 

class A { 
public: 
    void show() 
    { 
        cout << "Hello from A \n"; 
    } 
}; 

class B : public A { 
}; 

class C : public A { 
}; 

class D : public B, public C { 
}; 

int main() 
{ 
    D object; 
    object.show(); 
} 
Compile Errors:

prog.cpp: In function 'int main()':
prog.cpp:29:9: error: request for member 'show' is ambiguous
  object.show();
         ^
prog.cpp:8:8: note: candidates are: void A::show()
   void show()
        ^
prog.cpp:8:8: note:                 void A::show()


To resolve this ambiguity when class A is inherited in both class B and class C, it is declared as virtual base class by placing a keyword virtual as : 

virtual can be written before or after the public. Now only one copy of data/function member will be copied to class C and class B and class A becomes the virtual base class. Virtual base classes offer a way to save space and avoid ambiguities in class hierarchies that use multiple inheritances. When a base class is specified as a virtual base, it can act as an indirect base more than once without duplication of its data members. A single copy of its data members is shared by all the base classes that use virtual base. 


#include <iostream> 
using namespace std; 

class A { 
public: 
    void show() 
    { 
        cout << "Hello from A \n"; 
    } 
}; 

class B : public virtual A { 
}; 

class C : public virtual A { 
}; 

class D : public B, public C { 
}; 

int main() 
{ 
    D object; 
    object.show(); 
} 


C++ Multilevel Inheritance
Multilevel inheritance is a type of inheritance in C++ where a derived class inherits properties and methods from a base class, and the base class itself is derived from another base class. This creates a hierarchy of inheritance with multiple levels


#include <iostream>

class Animal {
    public:
        void sound() { cout << " generic animal sound" << endl; }
};

class Mammal : public Animal {
    public:
        void eat() { cout << "eating" << endl; }
};

class Dog : public Mammal {
    public:
        void bark() { cout << "woof!" << endl; }
};

int main() {
    Dog myDog;
    myDog.sound(); // outputs "generic animal sound"
    myDog.eat();   // outputs "eating"
    myDog.bark();  // outputs "woof!"
    return 0;
}



In this example:

Animal is the base class.
Mammal is derived from Animal and adds the eat() method.
Dog is derived from Mammal and adds the bark() method.
Key Points
A derived class can inherit from multiple base classes using multilevel inheritance.
Each level of inheritance creates a new scope, allowing derived classes to override or add new members and methods.
The most derived class (e.g., Dog) has access to all members and methods of its base classes (e.g., Mammal and Animal).

Advantages
Code reuse: Multilevel inheritance allows you to reuse code from base classes, reducing code duplication.
Flexibility: It enables you to create complex hierarchies of inheritance, modeling real-world relationships between classes.
Polymorphism: Multilevel inheritance enables polymorphic behavior, where objects of different classes can be treated as if they were of the same class.



#include <iostream>
using namespace std ;

// MULTI-LEVEL INHERITANCE

class A
{
public:
void showA() { cout << "This is class A  \n"; }
};

class B : public A
{
public:
void showB() { cout << "This is class B \n"; }
};
class C : private B    //  here class B inherited privately 
{
public:
void showC() 
{ 
cout << "This is class C \n"; 
cout << "Calling ShowA and ShowB from ShowC \n";
showA();   //  Here we access showA and showB privately 
showB();
}
};

class D : public C
{
public:
void showD() 
{
cout << "This is class D \n"; 
}
};

int main()
{
D objd ; 
//objd.showA(); class B inherited privately so can't access showA and showB directly 
//objd.showB();
objd.showC();
objd.showD();

return 0;
}



C++ Multiple Inheritance
In C++, multiple inheritance allows a class to inherit properties and behavior from more than one base class. This is achieved by listing multiple base classes in the inheritance declaration, separated by commas.


class Animal {
    public:
        void sound() {
            cout << " generic animal sound" << endl;
        }
};

class Mammal {
    public:
        void eat() {
            cout << "mammal eats" << endl;
        }
};

class WingedAnimal {
    public:
        void fly() {
            cout << "winged animal flies" << endl;
        }
};

class Bat : public Animal, public Mammal, public WingedAnimal {
    // ...
};

In this example, the Bat class inherits from three base classes: Animal, Mammal, and WingedAnimal. This allows Bat to inherit the sound(), eat(), and fly() functions from its respective base classes.

Challenges
Diamond Problem: When two base classes have a common base class, it can lead to ambiguity and duplicate member variables. Virtual inheritance can help resolve this issue.
Order of Constructor Calls: The constructors of inherited classes are called in the order they are listed in the inheritance declaration.
Order of Destructor Calls: The destructors of inherited classes are called in the reverse order of constructor calls.
Best Practices
Use virtual inheritance to avoid the diamond problem.
Minimize the number of base classes to reduce complexity.
Use interfaces (abstract classes) instead of concrete classes to define a contract, making multiple inheritance more manageable.