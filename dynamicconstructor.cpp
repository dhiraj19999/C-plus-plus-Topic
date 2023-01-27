#include <iostream>
using  namespace std;

class dynamicconstructor{
    
    int *p;
    public:
    
   dynamicconstructor(int a){
      p=new int;
      *p=a;
   }
    
    void display(){
        cout<<"dynamic constructor "<<*p;
        
    }
};

int main() {
  dynamicconstructor obj1(10);
   obj1.display();
};