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