#include <iostream>
using namespace std;

class student
{
    private:
        int x, y ;
    public:
        void getdata(int t1, int t2)
        {
            x = t1 ; 
            y = t2 ; 
        }
        void putdata()
        {
            cout << "x = " << x << endl ;
            cout << "y = " << y << endl;
            
        }
};

int main()
{
    student s1 ; 
    s1.getdata(100,200);
    s1.putdata();
    
    student s2 ; 
    s2.getdata(500,600);
    s2.putdata();
    
    return 0;
}


#include <iostream>
using namespace std;

class student
{
    private:
        int x, y ;
    public:
        void getdata()
        {
            cout << "Enter the value of x :" ;
            cin >> x ;
            cout << "Enter the value of y : " ;
            cin >> y ; 
        }
        void putdata()
        {
            cout << "x = " << x << endl ;
            cout << "y = " << y << endl;
            
        }
};

int main()
{
    student s1 ; 
    s1.getdata();
    s1.putdata();
    
    student s2 ; 
    s2.getdata();
    s2.putdata();
    
    return 0;
}


#include <iostream>
using namespace std;

class student
{
    private:
        int x, y ;
        void getdata()
        {
            cout << "Enter the value of x :" ;
            cin >> x ;
            cout << "Enter the value of y : " ;
            cin >> y ; 
        }
    public:
        void putdata()
        {
            getdata();
            cout << "x = " << x << endl ;
            cout << "y = " << y << endl;
            
        }
};

int main()
{
    student s1 ; 
    s1.putdata();
    
    student s2 ; 
    s2.putdata();
    
    return 0;
}



//A constructor is a specially defined method in a C++ class that is automatically called when an instance of that class is created,constructor has same name as Class name
// Default Constructor: No parameters. They are used to create an object with default values.
//Parameterized Constructor: Takes parameters. Used to create an object with specific initial values.
//Copy Constructor: Takes a reference to another object of the same class. Used to create a copy of an object.




#include <iostream>
using namespace std;

class student
{
    private:
        int x, y ;
    public:
        student()  // default constructor
        {
            cout << "Enter the value of x :" ;
            cin >> x ;
            cout << "Enter the value of y : " ;
            cin >> y ; 
        }
        void putdata()
        {
            cout << "x = " << x << endl ;
            cout << "y = " << y << endl;
        }
};

int main()
{
    student s1, s2, s3 ; 
    
    s1.putdata();
    s2.putdata();
    s3.putdata();
    
    return 0;
}



#include <iostream>
using namespace std;

class student
{
    private:
        int x, y ;
    public:
        student(int t1, int t2) // Parameterized or argument constructor
        {
            x = t1 ; y = t2 ; 
        }
        void putdata()
        {
            cout << "x = " << x << endl ;
            cout << "y = " << y << endl;
        }
};

int main()
{
    student s1(10,20), s2(30,40), s3(50,60) ; 
    
    s1.putdata();
    s2.putdata();
    s3.putdata();
    
    return 0;
}





// A destructor is a member function that is invoked automatically when the object goes out of scope or is explicitly destroyed by a call to delete or delete
//  destructor is called by the compiler when the object is destroyed means at the end of the program
//destructors are used to clean up and deallocate memory for a class object and its members when the object is destroyed. 

#include <iostream>
using namespace std;

class student
{
    private:
        int x, y ;
    public:
        student(int t1, int t2)   // Constructors
        {
            x = t1 ; y = t2 ; 
        }
        void putdata()
        {
            cout << "x = " << x << endl ;
            cout << "y = " << y << endl;
        }
        ~student()  // destructor
        {
            cout << "Object is killed " << endl ; 
        }
};

int main()
{
    student s1(10,20), s2(30,40), s3(50,60) ; 
    
    s1.putdata();
    s2.putdata();
    s3.putdata();
    
    return 0;
}




// A default argument is a value in the function declaration automatically assigned by the compiler if the calling function does not pass any value to that argument


#include <iostream>
using namespace std;

class student
{
    private:
        int x, y ;
    public:
        student(int t1, int t2=0)   //  arguments constructor
        {
            x = t1 ; y = t2 ; 
        }
        void putdata()
        {
            cout << "x = " << x << endl ;
            cout << "y = " << y << endl;
        }
        ~student()
        {
            cout << "Object is killed " << endl ; 
        }
};

int main()
{
    student s1(10), s2(30,40), s3(50,60) ;   //default arguments
    
    s1.putdata();
    s2.putdata();
    s3.putdata();
    
    return 0;
}











#include <iostream>
using namespace std;

int sum(int *t1, int *t2, int *t3)
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
     result = sum(x, y, z); // Call by value that is passes the value 
    result = sum(&x, &y, &z);   //Call by reference that is passes the address of value
    cout << "The result of sum = " << result << endl ;
    return 0;
}












#include <iostream>
using namespace std;

class Student
{
    private: 
    int x, y ; 
    public:
    Student(int t1, int t2)    // Argument Constructor
    {
        x = t1 ; y = t2 ; 
    }
    
    Student(Student &t)      //Copy Constructor
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






#include <iostream>
using namespace std;

//Write a program to select maximum value from given three values.
// 10, 34, 25
// Output should be : Maximum value is 34.

class NumberCheck
{
    int x, y, z ; 
    public:
    NumberCheck(int t1, int t2, int t3)
    {
        x = t1 ; y = t2 ; z = t3 ; 
    }
    void SelectMax()
    {
         if (x > y ) 
         {
             if (x > z ) {   cout << "x is big " ; }
             else {  cout << "z is big" ;  }
         }
         else 
         { 
             if (y > z ) { cout << "y is big"; }
             else
             { cout <<"z is big"; }
             
         }
    }
};

int main()
{
    NumberCheck s1(500, 134, 87); 
    s1.SelectMax();
    return 0;
}




#include <iostream>
using namespace std;

//Write a program to add the sequence of numbers from 10 to 25.
// Output should be : Total value is  = **** .

int main()
{
    cout << "Welcome to the class " << endl ;
    int sum = 0 ;
    
    for (int i = 10; i <= 25 ; i=i+1) // i++
    {
        sum = sum + i ; 
    }
    cout << "Total value is = " << sum << endl ;
    return 0 ;






}




#include <iostream>
using namespace std;

// Write a program to display EVEN NUMBERS from 10 to 25.
// Display only the summation of even numbers

int main()
{
    int sum = 0 ;
    for (int i = 10; i <= 25 ; i=i+1) // i++
    {
        if ( i % 2 == 0 )
        {
            cout << i << "is even number " << endl ;
            sum = sum + i ; 
        }
    }
    cout << "The total value is = " << sum << endl ;
    return 0 ;
}
