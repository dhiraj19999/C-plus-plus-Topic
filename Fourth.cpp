

//Pointers (C++)
//A pointer is a variable that stores the memory address of an object. Pointers are used extensively in both C and C++ for three main purposes: to allocate new objects on the heap, to pass functions to other functions. to iterate over elements
//in arrays or other data structures.
//A copy constructor is a type of constructor that initializes an object using another object of the same class
// special type of constructor that is defined with specific arguments to initialize an object after it has been allocate
#include <iostream>
using namespace std;

int sum(int *t1, int *t2, int *t3) // geting the adress of x y z 
{
    int total ;
    cout << "The address of x (stored t1 ) : " << t1 << endl ;
    cout << "The address of y (stored t2 ) : " << t2 << endl ;
    cout << "The address of z (stored t3 ) : " << t3 << endl ;
    
    total = *t1 + *t2 + *t3 ; 
    return(total);
}

int main()
{
    int x = 10, y = 20, z = 30 ; 
    int result ; 
    result = sum(&x, &y, &z);   //Call by reference, passing the address of x y z
    cout << "The result of sum = " << result << endl ;
    return 0;
}







class Student
{
    private: 
    int x, y ; 
    public:
    Student(int t1, int t2)    // Argument Constructor
    {
        x = t1 ; y = t2 ; 
    }
    
    Student(Student &t)      //Copy Constructor   ==>  takes another object as an arguent
    {
        x = t.x ; 
        y = t.y ; 
    }
    
    void putdata()
    {
        cout << "The Value of x = " << x << endl ;
        cout << "The value of y = " << y << endl ; 
    }
};

int main()
{
    Student s1(100,200), s2(400, 200), s3(100,400), s4(s2) ; 
    cout << "Object s1 " <<endl;
    s1.putdata();
    cout << "Object s2 " <<endl;
    s2.putdata();
    cout << "Object s3 " <<endl;
    s3.putdata();
    cout << "Object s4 " <<endl;
    s4.putdata();
    return 0;
}






