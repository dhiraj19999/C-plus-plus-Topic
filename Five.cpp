#include <iostream>
using namespace std ; 

class student
{
int x, y;
public:
student()   
{

}
void putdata()
{
cout << " x = " << x << endl ; 
cout << " y = " << y << endl ; 
}
};

int main()
{
student s1 ; 
cout << "Memory for a class " << sizeof (student) << endl ;

char t1 = 'a'; 
cout << "The value of t1 = " << t1 << endl ;
cout << "Address of t1 = " << &t1 << endl ;

char *t2 ; // 
t2 = &t1 ;  // stores the address of t1 in t2
 
cout << "The value of t2 = " << t2 << endl ; // prints the address of t1
    cout << "Memory allocated for t2 " << sizeof(t2) << endl ;

 
cout << "The address of t2 = " << &t2 << endl ; 


s1.putdata();
return 0;
}



//  Pointers are symbolic representations of addresses


#include <bits/stdc++.h>
using namespace std;
void geeks()
{
    int var = 20;

    // declare pointer variable
    int* ptr;

    // note that data type of ptr and var must be same
    ptr = &var;

    // assign the address of a variable to a pointer
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
}

int main() 
{ 
  geeks(); 
  return 0;
}

//Output :  Value at ptr = 0x7ffe454c08cc
//Value at var = 20
//Value at *ptr = 20




//When allocation of memory is done dynamically using dynamic memory allocator new in a constructor, it is known as dynamic constructor
#include <iostream>
using namespace std;
 
class geeks {
    const char* p;
 
public:
 
    geeks() // dynamic constructor ::  called dynamic becuz memory allocate at run time
    {
 
        // allocating memory at run time
        p = new char[6];
        p = "geeks";
    }
 
    void display() { cout << p << endl; }
};
 
int main()
{
    geeks obj;
    obj.display();
}





class student{

int *x,*y
public:
student() {// dynamic constructor
    //The new operator denotes a request for memory allocation on the Free Store. If sufficient memory is available, a new operator initializes the memory and returns the address of the newly allocated 
    //and initialized memory to the pointer variable. 
x= new int;
y= new int;

    *x=1234;
    *y=3456;
}
void put_data(){

    cout<<"value of x"<<x* << endl;
    cout<<"address of x"<<x<<endl;

}
}

int main(){

    student s1
    s1.put_data()
        return 0
}




#include <iostream>
using namespace std ; 

class student
{
double *x, *y;
public:
//student()   // Dynamic Constructor

void getdata()
{
cout << "This is inside getdata" << endl ;
x = new double[100] ;q // alocates 100 differnt locations
y = new double[500] ; 

for (int i=0; i<10; i++)
{
x[i] = i ; 
y[i] = i + 100 ; 
 }
}

void putdata()
{
for (int i=0; i<10; i++)
{
cout << x[i] << "and " << y[i] << endl ; 
 }

}
};

int main()
{
student s1 ; 
s1.getdata();
s1.putdata();
return 0;
}






#include <iostream>
using namespace std ; 

int temp = 890 ; // global variables

void MyFunction()
{
cout << "This is inside a MyFunction" << endl ;
    int x = 500 ;  // local variables
cout << "x = " << x << endl ; 
cout << "temp (global) = " << temp << endl;

int temp = 789 ; 
cout << "temp (local) = " << temp << endl;
}

int main()
{
int x = 100 ;  // local variables
cout << "x = " << x << endl ; 
MyFunction();
cout << "temp = " << temp << endl; 
return 0;
}

//The auto keyword in C++ automatically detects and assigns a data type to the variable with which it is used. The compiler analyses the variable's data type by looking at its initialization. It is necessary 
  //  to initialize the variable when declaring it using the auto keyword. T



//The static keyword can be used to declare variables and functions at global scope, namespace scope, and class scope
#include <iostream>
using namespace std ; 

// storage clause  ;; AUTO STATIC EXTERN REGISTER 

class student
{
public :
student()
{
static int count = 0 ; // here count act as a global varible becuz of static keyword, whatever times funvtion get called but  count varible dosen't get redeclared again and again
count = count + 1 ; 
} 
static int getCount(); // static function used to handle static varible, only static fun can access and return the static varible
{
return count; 
}
};

int main()
{
student s1, s2, s3, s4, s5 ; 
cout << "No of times constructor called " << student::getCount() << endl ; // we use static fun to get access of static varibles in main function becuz other function can;t get access of static varible in main fun
}
