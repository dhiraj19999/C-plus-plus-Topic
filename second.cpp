

//
#include<iostream>  
using namespace std; 
class demo{

    private:
    int f_num,s_num ; // those varibles are private so its can't be accses outisde the demo class
    public:
    void input_data(){
        f_num=200;
        s_num=300;
    };

    int sum(){ 
        return (f_num+s_num);
    };
};

int main(){

demo d1; // d1 is object here


int result ;
d1.input_data();

result=d1.s_num();

cout<<"the result of program is="<<result<<endl;

};
