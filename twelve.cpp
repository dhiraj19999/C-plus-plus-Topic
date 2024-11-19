#include <iostream>
#include <fstream>
using namespace std ;

int main()
{
int ARR[10];

cout << "Enter 10 values one by one " << endl ;
for (int i=0; i<10; i++)
{
cin >> ARR[i] ;
}

cout << "Your values are given below " << endl; 
for (int i=0; i<10; i++)
{
cout << ARR[i] << endl ; 
}
cout << "Program is completed" << endl ; 
}