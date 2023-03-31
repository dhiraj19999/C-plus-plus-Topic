#include <iostream>
using namespace std;
class base{
    public:

    void msg(){
        cout<<"hello i am base class"
    }


};

class A:public base{
     

     public:
     void show(){
        cout<<"hello i am A class";
     };


}

class B:public A{
     

     public:
     void disp(){
        cout<<"hello i am B class";
     };


}




int main(){
    
    B obj; 
obj.disp();
obj.show();
obj.message()

}