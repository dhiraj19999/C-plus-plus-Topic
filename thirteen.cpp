#include <iostream>
using namespace std ;

int main()  
{
int x ; 

try
{
throw(x) ;  //Termination Model
cout << "Statement inside Try block \n";
}

catch(...)  //default catch block
{
cout << "Kindly try again,, sorry for inconvenience\n";
}

cout << "Program is Completed \n";
}




int main()  
{
int x = 100; 
float y = 12.45; 
char z = 'A'; 
double x1 = 3467899.123; 

try
{
throw(x) ;  
cout << "Statement inside Try block \n";
}
catch(int)  //default catch block
{
cout << " int handling" << endl;
}
catch(float)  //default catch block
{
cout << "float handling " << endl;
}
catch(char)  //default catch block
{
cout << "char handling " << endl;
}
catch(double)  //default catch block
{
cout << " double handling" << endl;
}


cout << "Program is Completed \n";
}


int main()  
{
// CA marks of our CPP subject.
// for 10 students

// Exception 1 : May be negative marks
// Exception 2 : Out of range ( < 0 ; > 100 )

int marks[10] ; 

for (int i=0; i<10; i++)
{
cout << "Enter the marks : " ; 
cin >> marks[i] ; 

try
{
if ((marks[i] < 0 ) || (marks[i] > 100)) 
throw (marks[i]) ; 
}
catch(int temp)  //default catch block
{
   cout << "You have entered wrong marks, Try again" << endl;
   cout << "Entered is value = " << temp << endl ; 
}
}
cout << "Program is Completed \n";
}