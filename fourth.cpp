//
#include<iostream>  
using namespace std; 

class demo{

    private:
    int f_num,s_num ; 
    public:
    void input_data();
    int sum();

   
};



void demo :: input_data(){ // :: scope resoltuion oprator
 
 cout <<"Enter the value of f_num:";
 cin >> f_num ; // cin is the function which is use to read value come from keybord
 cout <<"Enter the value of s_num:";
 cin >> s_num;
 
} ;

int demo :: sum(){

    return (f_num+s_num)
};








int main(){

demo d1; // d1 is object here



int result ;
d1.input_data();

result=d1.s_num();

cout<<"the result of program is="<<result<<endl;

};
