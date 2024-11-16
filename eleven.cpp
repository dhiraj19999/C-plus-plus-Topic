#include <iostream>
#include <fstream>  // Header

using namespace std ;

int main()
{
string x1 ; 
ofstream f1 ;   // f1 is an object of ofstream class whcih is used to create file
int n ; 

f1.open("StudentNames.txt");  // here we created the file name StudentsNames

cout << "Enter no. of students : " ; 
cin >> n ; 

for (int i=0; i<= n; i++)
{
getline(cin, x1) ; 
f1 << x1 ;
f1 << "\n" ; 
}
f1.close();   

cout << endl ; 
return 0;
}


#include <iostream>
#include <fstream>
using namespace std ;

int main()
{
string x1 ; 
ifstream f1 ;   //f1 is an object of ifstream class whcih is used to read file

f1.open("StudentNames.txt");

cout << "Here is the list of all of students \n";

while(f1)
{
getline(f1, x1) ; 
cout << x1 << endl ; 
}

f1.close();

return 0;
}


#include <iostream>
#include <fstream>
using namespace std ;

int main()
{
string x1 ; 

fstream f1 ; 
f1.open("StudentNames.txt", ios::app);   // ios:app is append mode here we use it to modify or add more content in file

cout << "Enter your name : ";
getline(cin, x1) ; 

f1 << x1 << "\n"; 

f1.close();

return 0;
}
