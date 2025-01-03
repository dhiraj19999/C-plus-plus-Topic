

//User defined (Explicit) Type Conversion


// 3. CLASS TYPE TO CLASS TYPE

class Time
{
int Hours ; 
int Mints ;
public:
Time(int v1, int v2)
{
Hours = v1 ; Mints = v2 ; 
} 
int getHours()
{
return (Hours) ;
}
int getMinutes()
{
return (Mints);
}
void putdata()
{
cout << "Hours = " << Hours << endl ;
cout << "Minutes " << Mints << endl; 
}
};

class Minutes
{
int min ; 
public:
void putdata()
{
cout << "Minutes " << min << endl; 
}
void operator = ( Time &temp )
{
min = temp.getHours() * 60 + temp.getMinutes() ; 
}
};

int main()
{
cout << "This is using operator overloading" << endl ;
Time t1 (3, 25) ;   Minutes m1 ; 

m1 = t1 ; 

t1.putdata();
m1.putdata();

cout << "Program is completed" << endl ;
}
//
