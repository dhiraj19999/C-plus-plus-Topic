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




#include <iostream>
#include <fstream>
using namespace std ;

void bubblesort(int ARR2[])
{
cout << "Bubble Sorting is in process (inside the function) \n" ; 
for (int i=0; i<9; i++)
for (int j = i + 1; j < 10 ; j++)
{
if ( ARR2[i] < ARR2[j])
{
int temp;
temp = ARR2[i];
ARR2[i] = ARR2[j];
ARR2[j] = temp ;
}
}
cout << "Values in Descending Order given below" << endl ;
for (int i=0; i<10; i++)
{
cout << ARR2[i] << "," ;
}
cout << endl ; 

}

int main()
{
int ARR1[10];  // local variable

cout << "Enter 10 values one by one " << endl ;
for (int i=0; i<10; i++)
{
cin >> ARR1[i] ;
}
cout << "calling the function - passing arguments\n"; 
bubblesort(ARR1);

cout << "Program is Completed \n";
}




#include <iostream>
#include <fstream>
using namespace std ;

int main()
{
char ARR1[4][10] = {"Devendran", "Raja", "Kumar", "Sharif"} ; 


cout << ARR1[2] << endl ; 


cout << ARR1[1][0] << endl ; 


cout << "Program is Completed \n";
}