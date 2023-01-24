// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class nest_number{
    public:
    int l,w;
    
    void getdata();
    void displaysum();
};

void nest_number::getdata(){ // memebr fuction outside the class we can access by double semi colon ::
   
   cout<<"enter length ";
   cin>>l;
    cout<<"enter width ";
   cin>>w;
   
   
};

void nest_number:: displaysum(){
    
    getdata(); // nested memebr fuction
    cout<<"Area is"<<l*w;
    
}

int main(){
  nest_number nm1;
  nm1.displaysum();
    
}