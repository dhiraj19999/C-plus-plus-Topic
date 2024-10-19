// Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is 
//called Function Overloading
#include <iostream>
using namespace std ; 

void MyFunction1(int x, int y)
{
cout << "This is two parameters" << endl ;
}
void MyFunction1(int x, int y, int z)
{
cout << "This is three parameters" << endl ;
}
void MyFunction1(int x)
{
cout << "This is one parameter" << endl ;
}

int main()
{
MyFunction1(10);
MyFunction1(10,20,30);
MyFunction1(10,20);
return 0;
}

#include <iostream>
using namespace std ; 

void MyFunction1(int x, float y)
{
cout << "This is int, float parameters" << endl ;
}
void MyFunction1(float x, int y)
{
cout << "This is two parameters" << endl ;
}
void MyFunction1(int x, int y)
{
cout << "This is int, int parameters" << endl ;
}
void MyFunction1(float x, float y)
{
cout << "This is float, float parameters" << endl ;
}

int main()
{
int x; float y;
x = 100; y = 45.78;
MyFunction1(x, y);
  MyFunction1(y, y);
return 0;
}











#include <iostream>
using namespace std ; 

//COMMAND LINE ARGUMENTS
//The first parameter, argc (argument count) is an integer that indicates how many arguments were entered on the command line when the program was started. The second parameter, argv (argument vector), 
//is an array of pointers to arrays of character objects.
int main(int argc, char** argv)  //  here we get argument from user or from outside char is a datatype of argument
{
cout << "No of arguments = " << argc << endl ;
cout << "Values of parameters are \n";
for (int i = 0; i < argc ; i++)
{
cout << argv[i] << endl ; 
}
return 0;
}


// char* x ; x='Devendran'    ; single dimensionla varible 
 

// char x[50][50] ; 

// char** x ; x = "Devendran", "Arun", "Balasubramani"   ;   two dimensional varible 
 
  ...
  ...

x[0] ==> Devendran
x[1] ==> Arun








#include <iostream>
using namespace std ; 

//COMMAND LINE ARGUMENTS

int main(int argc, char** argv)
{
cout << "No of arguments = " << argc << endl ;
cout << "Values of parameters are \n";
for (int i = 0; i < argc ; i++)
{
cout << argv[i] << endl ; 
}
return 0;
}


// char x ;  x='a'; x='b';

// char x[70] ;
// char* x ; x='Devendran' 

// char x[50][50] ; 

// char** x ; x = "Devendran", 
  "Arun",
  "Balasubramani"
  ...
  ...

x[0] ==> Devendran
x[1] ==> Arun
