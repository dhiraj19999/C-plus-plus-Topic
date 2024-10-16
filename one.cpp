/*
Object oriented programing is a type of programing which uses objects and classes its functioning 

class is basic str block on objct oriented programing 
a class is data type that has its own data members 
members of class accesed by making instance of  class
data members are the varibles of class
member fun are the methods that are used to manipulate data members
data members means properties of class and member fun define behavior of class
iostream is class which has all the function like cout, cin
*\

 #include <iostream>
using namespace std ; 

class demo
{
public:
int f_num, s_num ; 

void sum(int a, int b)
{
  cout << a + b ;
}
};

int main()
{
demo d1 ; // making instance d1 of class demo

d1.f_num = 100 ; 
d1.s_num = 234 ; 

d1.sum(d1.f_num, d1.s_num);

cout << endl << "Program Completed " << endl ; 
} 






//  Access specifiers are keywords that define how members of a class can be accessed

class demo
{
private:
int f_num, s_num ; 

public:
void input_data()
{
f_num = 100 ; 
s_num = 200 ; 
}

int sum()
{
  return (f_num + s_num);
}
};

int main()
{
demo d1 ; 

int result ; 

d1.input_data(); 

result = d1.sum();

cout << "The result of the prog = " << result << endl; 
}


// Scope resolution operator :: is used to declare defining the function outside the class

class demo
{
protected:
int f_num, s_num ; 

public:
void input_data() ; 
int sum() ; 
};


void demo :: input_data()  // scope resolution operator  :: 
{
cout << "Enter the value of f_num : " ;
cin >> f_num ; 

cout << "Enter the value of s_num : " ; 
cin >> s_num ; 
}

int demo :: sum()
{
  return (f_num + s_num);
}

int main()
{
demo d1 ; 

int result ; 

d1.input_data(); 

result = d1.sum();

cout << "The result of the prog = " << result << endl; 
}




class demo
{
protected:
int f_num, s_num ; 

public:
void input_data() ; 
int sum() ; 
};


void demo :: input_data()  // scope resolution operator  :: 
{
cout << "Enter the value of f_num : " ;
cin >> f_num ; 

cout << "Enter the value of s_num : " ; 
cin >> s_num ; 
}

int demo :: sum()
{
  return (f_num + s_num);
}

int main()
{
demo d1 ; 

int result ; 

d1.input_data(); 

result = d1.sum();

cout << "The result of the prog = " << result << endl; 
}




class demo
{
protected:
int f_num, s_num ; 

public:
void input_data() ; 
int sum() ; 
};


void demo :: input_data()  // scope resolution operator  :: 
{
cout << "Enter the value of f_num : " ;
cin >> f_num ; 

cout << "Enter the value of s_num : " ; 
cin >> s_num ; 
}

int demo :: sum()
{
  return (f_num + s_num);
}

int main()
{
demo d1 ; 

int result ; 

d1.input_data(); 

result = d1.sum();

cout << "The result of the prog = " << result << endl; 
}



//Data abstraction refers to providing only essential information about the data to the outside world, ignoring unnecessary details or implementation

// C++ Program to Demonstrate the
// working of Abstraction
#include <iostream>
using namespace std;

class implementAbstraction {
private:
    int a, b;

public:
    // method to set values of
    // private members
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}

//You can see in the above program we are not allowed to access the variables a and b directly, however, one can call the function set() to set the values in a and b and the function display() to display the 
//values of a and b. 






class demo
{
protected:
int n, bag[10]; 

public:
void input_data() ; 
int sum() ; 
};


void demo :: input_data()  // scope resolution operator  :: 
{
cout << "Enter number of data : " << endl ;
cin >> n ; 

cout << "Enter the actural values : " ; 
for (int i=0; i < n ; i++ )
{
cin >> bag[i] ; 
}
cout << "Data is entered successfully " << endl;
}

int demo :: sum()
{
int sum = 0 
for (int i=0; i < n ; i++ )
{
sum = sum  bag[i] ; 
}
}

int main()
{
demo d1 ; 

int result ; 

d1.input_data(); 

result = d1.sum();

cout << "The result of the prog = " << result << endl; 
}
