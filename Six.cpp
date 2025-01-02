#include <iostream>
using namespace std ; 

// storage clause  ;; AUTO STATIC EXTERN REGISTER 

class student
{
public :
static int count ; 
student()
{
count = count + 1 ; 
} 
};

int student :: count = 0 ; 

int main()
{
student s1, s2, s3, s4, s5 ; 
cout << "No of times constructor called " << student::count << endl ;  // No of times constructor called 5
}






#include <iostream>
using namespace std ; 

}




//  Inharitance 
//The capability of a class to derive properties and characteristics from another class is called Inheritance.


#include <iostream>
using namespace std ; 

// Simple Inheritance 
//
class A
{
public:
void functionA1()
{
cout << "This is functionA1" << endl ; 
}
void functionA2()
{
cout << "This is functionA2" << endl ; 
}
};

class B  : public A
{
public:
void functionB1()
{
cout << "This is functionB1" << endl ; 
}
void functionB2()
{
cout << "This is functionB2" << endl ; 
}
};

int main()
{
B obj2 ; 
obj2.functionB1();
obj2.functionB2();
obj2.functionA1();
obj2.functionA2();
}



//public inheritance makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.
//protected inheritance makes the public and protected members of the base class protected in the derived class.
//private inheritance makes the public and protected members of the base class private in the derived class.


#include <iostream>
using namespace std ; 

// Simple Inheritance 

class A
{
public:
void functionA1()
{
cout << "This is functionA1" << endl ; 
}
void functionA2()
{
cout << "This is functionA2" << endl ; 
}
};

class B  : private A
{

public:
void functionB1()
{
cout << "This is private functions " << endl ; 
functionA1();
functionA2();
cout << "This is functionB1" << endl ; 
}
void functionB2()
{
cout << "This is functionB2" << endl ; 
}
};

int main()
{
B obj2 ; 
obj2.functionB1();
obj2.functionB2();
}


#include <iostream>
using namespace std ; 

// Simple Inheritance 

class A
{
private:
void DummyFunctionA()
{
cout << "This is DummyFunctionA" << endl ;
}

public:
void functionA1()
{
cout << "This is functionA1" << endl ; 
cout << "I am calling DummyFunctionA now " << endl ;
DummyFunctionA();
}
void functionA2()
{
cout << "This is functionA2" << endl ; 
}
};

class B  : private A
{

public:
void functionB1()
{
cout << "This is private functions " << endl ; 
functionA1();  //  we cant directly called DummyFunctionA in class B that is derived class becuse whatetevr we declared in private in base class it does not take participate in inharitance that is DummyFun from A class
functionA2();
cout << "This is functionB1" << endl ; 
}
void functionB2()
{
cout << "This is functionB2" << endl ; 
}
};

int main()
{
B obj2 ; 
obj2.functionB1();
obj2.functionB2();
}





#include <iostream>
using namespace std ; 

// Simple Inheritance 

class A
{
protected:
int x, y ; 
public:
void putData()
{
x = 100 ; 
y = 200 ; 
}
};

class B :  private A
{
private:
int sum ; 
public:
void DoCalculation()
{
putData();
sum = x + y ;  //  only protected and public takes part in inharitance
cout << "Sum = " << sum << endl ;
}

};

int main()
{
B obj1 ; 
obj1.DoCalculation();
}
