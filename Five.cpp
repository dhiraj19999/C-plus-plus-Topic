#include <iostream>
using namespace std;
//    IF  ELSE
//Write a program to select maximum value from given three values.
// 10, 34, 25
// Output should be : Maximum value is 34.

class NumberCheck
{
    int x, y, z ; 
    public:
    NumberCheck(int t1, int t2, int t3)
    {
        x = t1 ; y = t2 ; z = t3 ; 
    }
    void SelectMax()
    {
         if (x > y ) 
         {
             if (x > z ) {   cout << x << " is big " ; }
             else {  cout << z << " is big" ;  }
         }
         else 
         { 
             if (y > z ) { cout << y << " is big"; }
             else
             { cout << z << " is big"; }
             
         }
    }
};

int main()
{
    NumberCheck s1(0, 100, 0); 
    s1.SelectMax();
    return 0;
}



///  LOOPS  AND ARRAY


//Write a program to add the sequence of numbers from 10 to 25.
// Output should be : Total value is  = **** .

int main()
{
    cout << "Welcome to the class " << endl ;
    int sum = 0 ;
    
    for (int i = 10; i <= 25 ; i=i+1) // i++
    {
        sum = sum + i ; 
    }
    cout << "Total value is = " << sum << endl ;
    return 0 ;
}




// Write a program to display EVEN NUMBERS from 10 to 25.
// Display only the summation of even numbers

int main()
{
    int sum = 0 ;
    for (int i = 10; i <= 25 ; i=i+1) // i++
    {
        if ( i % 2 == 0 )
        {
            cout << i << "is even number " << endl ;
            sum = sum + i ; 
        }
    }
    cout << "The total value is = " << sum << endl ;
    return 0 ;
}


