// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Box{
    public:
   double length;
   void setwidth(double wid);
   double getwidth(void);
   
   private:
   double width;
};

double Box::getwidth(void){
    
    return width;
}

void Box::setwidth(double wid){
    
    width=wid;
}

int main(){
    
    Box b1;
    b1.length=100;
    cout<<"Length is"<<b1.length;
    b1.setwidth(50);
    cout<<"width is" <<b1.getwidth();
    
    
}