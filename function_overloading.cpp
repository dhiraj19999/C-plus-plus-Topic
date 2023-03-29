#include <iostream>
using namespace std;

class sample{

    public:
    int chk_num(){

        cout<<"value of a is"<<10
    };

     int chk_num(int a){

       if(a%2==0)
       cout<<"enterd number is even number is"<<a
    }else
    cout<<"enterd number is odd number is"<<a

float chk_num(float x,float y){
    cout<<"sum of float value is"<<x+y
}
}

main(){

    sample s;
    s.chk_num()
    s.chk_num(20)
      s.chk_num(20.5,46.8)// invoke floating 
}