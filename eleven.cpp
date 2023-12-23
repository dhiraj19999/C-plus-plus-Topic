using namespace std;
#include <iostream>

// 
class test{

public:
int *x  // pointer varibles >> only pointers can store other varibles memeory address.

double *y;
test(){//  dynamic constructor >> when we give memory allocation to varibles during run time then that is dynamic con

// here we allocating memeory during run time not during complie

x= new int;  // 4byte  =>  4bytes created dynamically using new oprator and allocate to x

y= new double[500]; // 8 byte  >> [500] 500 spaces  array of 500 loccation spaces during run time each location hold one doble 

*x=1234;
*y=1235;

};

void putdata(){

    cout<<"x="<<x<<endl;  // it gives value of x that is 1234

     cout<<"y="<<y<<endl; // it gives address of y ;


for(int i=0;i<11;i++){

    y[i]=i+1;
}




};



};

int main() {
    


    test t1;
    
    
t1.putdata();
   

    return 0;
};


/*
int t1=1432;
int *t2

t2=&t1  // storing the address of t1 in t2 t2 is pointer varible 

sizeof(t1)  // it shows how much memory allocated for t1


when we allocate memory dynamically during run time inside constructor then that constructor
is called as dynamic constructor.
*/
