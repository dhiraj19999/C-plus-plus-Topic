7#include <iostream>
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


cout << ARR1[1][0] << endl ; // R get printed from Raja


cout << "Program is Completed \n";
}





#include <iostream>
#include <fstream>
using namespace std ;

void DisplayNames(char ARR2[][25])
{
cout << "DisplayNames inside the function\n";
for(int i=0; i<4;i++)
{
cout << ARR2[i] << endl ; 
}
}

int main()
{
char ARR1[][25] = {"Devendran", "Raja rajan", "Kumar", "Sharif"} ;

cout <<"Passing 2D array as arguments \n";
DisplayNames(ARR1); 

cout << "Program is Completed \n";
}



#include <iostream>
using namespace std ;

int main()
{
int ARR1[3][3] ;

cout << "Enter the values row by row" << endl ;
for (int i=0; i<3 ; i++)
{
for (int j = 0; j<3 ; j++ )
{
cin >> ARR1[i][j] ;
}
}
cout << "Your values are " << endl ;
for (int i=0; i<3 ; i++)
{
for (int j = 0; j<3 ; j++ )
{
cout << ARR1[i][j] << "," ;
}
cout << endl ; 

}

//  Output will be 1  2   3   
                   4  5   6
cout << "Program is Completed \n";
// it's a example of adding rows and column in two dimensional array
}






#include <iostream>
using namespace std ;

// TEMPLATES
// GENETIC PROGRAMMING

template <typename T1, typename T2>
void sumofnumbers(T1 x, T2 y)
{
cout << "Sum = " << x + y << endl ;
}

int main()
{
float t1 = 45.678, t2 = 20.123 ;

sumofnumbers<float, float> (t1, t2);

cout << "Program is Completed \n";
}




#include <iostream>
using namespace std ;

// TEMPLATES
// GENETIC PROGRAMMING

template <typename T1, typename T2>
T2 sumofnumbers(T1 x, T2 y)
{
cout << "Sum of number is executed and returned the value\n";
return ( x + y ) ;
}

int main()
{
float t1 = 45.678, t2 = 20.123 , result ;

result = sumofnumbers<float, float> (t1, t2);
cout << "result = " << result << endl ;

cout << "Program is Completed \n";
}





#include <iostream>
using namespace std ;

// TEMPLATES (Function Template)
// TEMPLATES (Class Template)

// GENETIC PROGRAMMING
template <typename T1, typename T2>
class Student
{
T1 x ;
T2 y ;
public:
void getdata() 
{cout << "Enter two data" ;
    cin >> x ; 
    cin >> y ;
}
void putdata() 
{
cout << "Your two data are \n" ;
cout << x  << ", " <<  y << endl  ;
}
};

int main()
{
Student <int, int> obj1 ; 
obj1.getdata();

Student <float, float> obj2 ;
obj2.getdata();

cout << "Object 1 (int, int) \n";
obj1.putdata();

cout << "Object 2 (float, float) \n";
obj2.putdata();

cout << "Program is Completed \n";
}
