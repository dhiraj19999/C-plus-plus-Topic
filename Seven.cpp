//a friend function can be granted special access to private and protected members of a class in C++. They are not the member functions of the class but can access and manipulate the private and protected members of that
//class for they are declared as friends.

#include <iostream>
using namespace std ;
// Friend Function


class MyClass
{
int x, y ; 
public:
MyClass()
{
x = 100; 
y = 200 ; 
}
friend void MyFunction(MyClass);
};

void MyFunction(MyClass temp)
{
int sum =0;
sum = temp.x + temp.y ;
cout << "Sum = " << sum << endl ;
}

int main()
{
MyClass obj ; 
MyFunction(obj);
cout << "Program is completed" << endl ;
}


//A friend class can access private and protected members of other classes in which it is declared as a friend. It is sometimes useful to allow a particular class to access private and protected members of other classes

#include <iostream>
using namespace std ;
// Friend Function
// Friend Class

class MyClass2
{
int a, b ; 
public:
MyClass2()
{
a = 1000 ; b = 2000 ;  
}
friend class MyClass1 ; 
};

class MyClass1
{
int x, y ; 
public:
MyClass1()
{
x = 100 ; 
y = 200 ; 
}
void MyClass1Function(MyClass2 temp)
{
cout <<"Inside the MyClass1 \n" ; 
int sum1 =  x + temp.a ; 
int sum2 =  y + temp.b ;
cout << "Sum1 = " << sum1 << endl ;
cout << "Sum1 = " << sum2 << endl ;
} 
};


int main()
{
MyClass1 obj1 ;  MyClass2 obj2 ; 
obj1.MyClass1Function(obj2) ; 
cout << "Program is completed" << endl ;
}



//in C++, Operator overloading is a compile-time polymorphism. It is an idea of giving special meaning to an existing operator in C++ without changing its original meaning.
// Now, if the user wants to make the operator “+” add two class objects, the user has to redefine the meaning of the “+” operator such that it adds two class objects. This is done by using the concept of 
//“Operator overloading”. So the main idea behind “Operator overloading” is to use C++ operators with class variables or class objects. Redefining the meaning of operators really does not change their 
//original meaning; instead, they have been given additional meaning along with their existing ones.

#include <iostream>
using namespace std ;
// Friend Function
// Friend Class

class MyClass
{
int x ; 
public:
MyClass(int t)
{
x = t ; 
}
MyClass operator + (MyClass temp1)
{
return MyClass( x + temp1.x ) ; 
}

void putdata()
{
cout << "Sum = " << x << endl ;  // 2200
}

};


int main()
{

MyClass obj1(900), obj2(700), obj3(600), obj4(0) ; 

obj4 = obj1 + obj2 + obj3 ; 

obj4.putdata();

cout << "Program is completed" << endl ;
}



// Urinary operator overloading

#include <iostream>
using namespace std ;

//Unary Operator Overloading

class A
{
int count ; 
public:
A()
{
count = 0 ; 
}

A operator ++()
{
count = count + 100 ; 
}

void displayCount()
{
cout << "The value of count = " << count << endl;
}

};

int main()
{
A obj1 ; 
cout << "Before Incrementing\n" ; 
obj1.displayCount();

++obj1; 

cout << "After Incrementing\n" ; 
obj1.displayCount();

cout << "Program is completed" << endl ;
}



//  TypeCasting
// A type cast is basically a conversion from one type to another.
// Three type of type conversion


#include <iostream>
using namespace std ;

//User defined (Explicit) Type Conversion

// 1. BASIC TYPE TO CLASS TYPE


class MyClass
{
int Hours ; 
int Minutes ; 
public:
MyClass(int temp)
{
Hours = temp / 60 ; 
Minutes = temp % 60 ; 
}
void putdata()
{
cout << "Hours = " << Hours << endl ; 
cout << "Minutes = " << Minutes << endl; 
}
};


int main()
{
MyClass obj1 ( 1000 ) ; 
obj1.putdata();
cout << "Program is completed" << endl ;
}



#include <iostream>
using namespace std ;

//User defined (Explicit) Type Conversion


// 2. CLASS TYPE TO BASIC TYPE


class MyClass
{
int Hours ; 
int Minutes ; 
public:
MyClass(int temp)
{
Hours = temp / 60 ; 
Minutes = temp % 60 ; 
}
void putdata()
{
cout << "Hours = " << Hours << endl ; 
cout << "Minutes = " << Minutes << endl; 
}
operator int ()
{
int total ; 
total = Hours * 60 + Minutes ; 
return (total);
}
};


int main()
{
MyClass obj1 ( 1000 ), obj2 (400), obj3 (670) ; 
obj1.putdata();

int total_time ;
total_time = obj3 ; 
cout << "Total time = " << total_time << endl ;

cout << "Program is completed" << endl ;
}
