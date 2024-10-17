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

/*

//A constructor is a specially defined method in a C++ class that is automatically called when an instance of that class is created,constructor has same name as Class name


*\


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
        student(int t1, int t2) // Parameterized constructor
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
        student(int t1, int t2=0)   // Constructors
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
