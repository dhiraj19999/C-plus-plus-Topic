#include <iostream>
using namespace std;
class sample{
    private:
    int x,y;
    public:
    sample(){
        
        cout<<"hello this is a constructor";
        
    };
    
    void message(){
       cout<<"This is member function";
    };
};

int main(){
    
    sample s;// constructor object
    s.message();
}
