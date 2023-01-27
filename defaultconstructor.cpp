#include <iostream>
using  namespace std;


class rectangle{
    
    private:
    int x;
    int y;
    public:
    rectangle(int a=10,int b=20){
        
        x=a;
        y=b;
        cout<<"rectangle is "<<x*y;
    };
};


int main(){
    
   rectangle r1;
};