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
