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






#include <iostream>
#include <fstream>
using namespace std ;

class student
{
int regno ;
string name ; 
public:
void getdata()
{
cout << "Enter register number : " ; 
cin >> regno ; 
cout << "Enter name  : " ;
cin >> name ;  
}
};

int main()
{
fstream f1 ; 
f1.open("StudentData.txt", ios::out); /// ios::out to add content in file

student s1 ; 
s1.getdata();

f1.write((char*)&s1, sizeof(s1));  // write is function to add data , char* is character pointer to s1 object

f1.close();

return 0;
}



#include <iostream>
#include <fstream>
using namespace std ;

class student
{
int regno ;
string name ; 
public:
void getdata()
{
cout << "Enter register number : " ; 
cin >> regno ; 
cout << "Enter name  : " ;
cin >> name ;  
}
void putdata()
{
cout << "Register number is : " << regno << endl ; 
cout << "Name is  " << name << endl ;  
}
};

int main()
{
fstream f1 ; 
f1.open("StudentData.txt", ios::in);  // ios::in to read data from file

student s1 ; 

f1.read((char*)&s1, sizeof(s1));  // read is an function to read data

s1.putdata();

f1.close();

return 0;
}



#include <iostream>
#include <fstream>
using namespace std ;

class student
{
int regno ;
string name ; 
public:
void getdata()
{
cout << "Enter register number : " ; 
cin >> regno ; 
cout << "Enter name  : " ;
cin >> name ;  
}
void putdata()
{
cout << "Register number is : " << regno << endl ; 
cout << "Name is  " << name << endl ;  
}
};

int main()
{
fstream f1 ; 
f1.open("StudentData.txt", ios::in);

student s1 ;

f1.read((char*)&s1, sizeof(s1));
while(f1)
{
s1.putdata();
f1.read((char*)&s1, sizeof(s1));
}

f1.close();

return 0;
}





#include <iostream>
#include <fstream>
using namespace std ;

// Sequential Access Files
// Random Access Files

class student
{
int regno ;
string name ; 
public:
void getdata()
{
cout << "Enter register number : " ; 
cin >> regno ; 
cout << "Enter name  : " ;
cin >> name ;  
}
void putdata()
{
cout << "Register number is : " << regno << endl ; 
cout << "Name is  " << name << endl ;  
}
};

// READ POINTER, WRITE POINTER


int main()
{
fstream f1 ; 
f1.open("StudentData.txt", ios::in);
student stud ;

cout << "Size of the object stud = " << sizeof(stud) << endl ;

    cout << "current position of read pointer : " ; 
cout << f1.tellg(); // tellg is an functin which tell us the current position of read pointer or current record its goes like  0 > 32 > 64 and so on
cout << endl  ; 

f1.read((char*)&stud, sizeof(stud));

cout << "current position of read pointer : " ;
cout << f1.tellg();
cout << endl  ; 

while(f1)
{
stud.putdata();
f1.read((char*)&stud, sizeof(stud));
cout << "current position of read pointer : " ;
cout << f1.tellg();
cout << endl  ; 
}

f1.close();

return 0;
}






#include <iostream>
#include <fstream>
using namespace std ;

// Sequential Access Files
// Random Access Files

class student
{
int regno ;
string name ; 
public:
void getdata()
{
cout << "Enter register number : " ; 
cin >> regno ; 
cout << "Enter name  : " ;
cin >> name ;  
}
void putdata()
{
cout << "Register number is : " << regno << endl ; 
cout << "Name is  " << name << endl ;  
}
};

// READ POINTER, WRITE POINTER


int main()
{
fstream f1 ; 
f1.open("StudentData.txt", ios::in);

student stud ;

f1.seekg(96,ios::beg);  // ios::beg, ios::end, ios::cur  ,  here seekkg function start from the beginig and change read pointer to 96 and we will get record which is availble at 96, ios::beg means bigning
cout << "Current Position of read pointer " << f1.tellg() << endl;

f1.read((char*)&stud, sizeof(stud));
stud.putdata();

f1.close();

return 0;
}







#include <iostream>
#include <fstream>
using namespace std ;

// Sequential Access Files
// Random Access Files

class student
{
int regno ;
string name ; 
public:
void getdata()
{
cout << "Enter register number : " ; 
cin >> regno ; 
cout << "Enter name  : " ;
cin >> name ;  
}
void putdata()
{
cout << "Register number is : " << regno << endl ; 
cout << "Name is  " << name << endl ;  
}
};

// READ POINTER, WRITE POINTER


int main()
{
fstream f1 ; 
f1.open("StudentData.txt", ios::in);
student stud ;
int n, loc ; 
cout << "Which record do you want : " ;
cin >> n ;

// record no. 1 ==> Byte location : 0
// record no. 2 ==> Byte location : 32
// record no. 3 ==> Byte location : 64
// record no. 4 ==> Byte location : 96

loc = sizeof(stud) * ( n - 1 ) ;  // here we cretaed logic for finding paticular record insted of entering byte location we can enter 1, 2 just like that for example n=3 then loc= 32*3-1=64 , so we get third record

f1.seekg(loc,ios::beg);  
cout << "Current Position of read pointer " << f1.tellg() << endl;

if (f1)
{
f1.read((char*)&stud, sizeof(stud));
stud.putdata();
}
else
{
cout << " Record Not Found " << endl ;
}

f1.close();

return 0;
}









#include <iostream>
#include <fstream>
using namespace std ;

// Sequential Access Files
// Random Access Files

class student
{
int regno ;
string name ; 
public:
void getdata()
{
cout << "Enter register number : " ; 
cin >> regno ; 
cout << "Enter name  : " ;
cin >> name ;  
}
void putdata()
{
cout << "Register number is : " << regno << endl ; 
cout << "Name is  " << name << endl ;  
}
};

// READ POINTER, WRITE POINTER


int main()
{
fstream f1 ; 
f1.open("StudentData.txt", ios::in | ios::out );
student stud ;
int n, loc ; 

cout << "Which record do you want to update : " ;
cin >> n ;

// record no. 1 ==> Byte location : 0
// record no. 2 ==> Byte location : 32
// record no. 3 ==> Byte location : 64
// record no. 4 ==> Byte location : 96

loc = sizeof(stud) * ( n - 1 ) ; 

f1.seekp(loc,ios::beg);  

cout << "Current Position of Write pointer " << f1.tellp() << endl;

cout << "Give new student details" << endl;
stud.getdata();

f1.write((char*)&stud, sizeof(stud));  // here we write data at particular byte location

f1.close();

return 0;
}
