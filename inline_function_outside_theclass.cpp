#include <iostream>
using namespace std;

class demo(){

    int a;
    public:
    void get_data(int n);
    void disp();
};


inline void demo::get_data(int n){
    a=n
}
inline void demo::disp(){
    cout<<"A is "<<a;
}



main(){
demo obj;
obj.get_data(50)
obj.disp()
    
}