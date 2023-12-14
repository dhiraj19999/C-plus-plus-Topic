#include<iostream>  
using namespace std; 
class student{

    private:
   int x,y;

   
    public:
     student(){ // its a constructor

    cout<<"enter value of x :";
    cin>>x;
     cout<<"enter value of y :";
    cin>>y;

   };
    void putdata(){
       
      
       cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;

    };

   void defaultfun(int a; int b=0){ //  b have default value 0 as suppose  if we call defaultfun with one
                                    // argument but defualtfun expect 2 parameters so by defualt second 
                                     // parameter have  0 value


   }



    ~student(){  // destructor will runs at the end of the program once job get done once memory get relesed
               // if you want to excute somthing at the end of the every object then we have to use destructor
               // destructure is also called automatically
       cout<<"object is killed"<<endl;
    }

    
};

int main(){

student s1;
// when s1 is created student constructed calls automatically
// if want to pass the argument in student constructor (34,60) e can pass likee that

s1.putdata();
s1.defaultfun(78) // here we pass only one argument
};
