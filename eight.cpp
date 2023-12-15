using namespace std;
#include <iostream>

int max(int a , int b , int c){
    
    if(a>b){
        
        if(a>c){
            return a;
        }else{
            return c;
        };
    }else{
        if(b>c){
            return b;
        }else {
            return c;
        };
    };
    
};

int main() {
   
    int res;
    res=max(23,67,99);
   cout<<"max is : "<<res<<endl;
   

    return 0;
}
