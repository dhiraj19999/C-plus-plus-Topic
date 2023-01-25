#include <iostream>
using namespace std;
class parameter{
    private:
    int x,y;
    public:
    parameter(int a,int b){
        
       x=a;
       y=b;
        
        cout<<"sum of a+b is"<<x+y;
    }
    
};

int main(){
    
    parameter p(30,30);
   
};
