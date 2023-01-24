


#include <iostream>
using namespace std;


class demo{
    
    private:
    int a,b;
    
    public:
    int sum(int x,int y){
        
        a=x;
        b=y;
      cout<<"sum is "<<a+b;
    }
};

 int main(){
  int num1,num2;
  demo obj1;
  cout<<"enter first number";
  cin>>num1;
   cout<<"enter second number";
  cin>>num2;
  
    obj1.sum(num1,num2);
};