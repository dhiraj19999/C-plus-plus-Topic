#include<iostream>  
using namespace std; 
class demo{

    private:
   int x,y;

   void getdata(){

    cout<<"enter value of x :";
    cin>>x;
     cout<<"enter value of y :";
    cin>>y;

   };
    public:
    void putdata(){
       
       getdata();
       cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;

    };

    
};

int main(){

demo d1;

d1.putdata();

};
