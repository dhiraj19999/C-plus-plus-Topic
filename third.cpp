// function are declared outside the class 
/*
by using scope resultion oprator we can use same function names for differnt classes
*/

#include<iostream>  
using namespace std; 

class demo{

    private:
    int f_num,s_num ; 
    public:
    void input_data();
    int sum();

   
};

class demo_two{

    private:
    int f_num,s_num ; 
    public:
    void input_data();
    int sum();

   
};


void demo :: input_data(){ // :: scope resoltuion oprator
 
 f_num=100;
 s_num=200;
} ;

int demo :: sum(){

    return (f_num+s_num)
};

void demo_two :: input_data(){ // :: scope resoltuion oprator
 
 f_num=100;
 s_num=200;
} 

int demo_two :: sum(){

    return (f_num+s_num)
}







int main(){

demo d1; // d1 is object here



int result ;
d1.input_data();

result=d1.s_num();

cout<<"the result of program is="<<result<<endl;

};


//
//
