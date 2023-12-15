//
#include<iostream>  
using namespace std; 
class student{

    private:
   int x,y;
  int j,m;
   
    public:
     student(int t1,int t2){ // its a constructor   // its a argument constructor becuse it has  argument 
                            //if we don't pass argument then its deafult constructor   
                
    cout<<"enter value of x :";
    cin>>x;
     cout<<"enter value of y :";
    cin>>y;
      
     j=t1;
     m=t2;
     return t1 + t2


   };

   student(student &temp){   // copy constructor

 // in temp has two values, student is data type for temp , &temp for temp take address pf s3
       
       j=temp.j;
       m=temp.m;



   }




    void putdata(){
       
      
       cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;

    };

   void defaultfun(int a; int b=0){ //  b have default value 0 as suppose  if we call defaultfun with one
                                    // argument but defualtfun expect 2 parameters so by defualt second 
                                     // parameter have  0 value


   };

   void refrnce(int *k , int *m){ /// here argument should be pointer varibles to take store address

  // *c means value of the c 
  // c means address of c 
  cout<<"the address of x {stored in k} :" << k <<endl;
   cout<<"the address of y {stored in m}  :" << m <<endl;

    return *k + *m
   }

    ~student(){  // destructor will runs at the end of the program once job get done once memory get relesed
               // if you want to excute somthing at the end of the every object then we have to use destructor
               // destructure is also called automatically
       cout<<"object is killed"<<endl;
    }

    
};

int main(){

student s1; // when s1 is created student constructed calls automatically
// if want to pass the argument in student constructor (34,60) e can pass likee that
 
 student s2(100,200) , s3(400,500) , 

 s4(s3)  //  here copying object to other object // here we pass the object s3
 
int x=10
int y=20
s1.putdata();
s1.defaultfun(x) // here we pass only one argument   // its called by value method

s1.refrnce(&x,&y) // its called by refrence method here address of x will be pass

};

//  when we don't pass to value to constructr then its aan default constructor and if we pass then 
// its a argument constructor
