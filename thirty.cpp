// Simple inharitance




#include<iostream>  
using namespace std; 

class A{

protected: //  protected also comes in inhairtence
int x,y

private:

void dummy(){ // whatevr we declare in private in base class not gona comes in inharietance

    cout<<"dummy is here"<<endl;// 
}
public:

void funA1(){
    cout<<"this is funA1"<<endl;

    dummy();
};

void funA2(){
    cout<<"this is funA2"<<endl;
};
   
};



class B : public A { // inhairate class A inside class B whatever having in the public 

public:

void funB1(){
    cout<<"this is funB1"<<endl;
};

void funB2(){
    cout<<"this is funB2"<<endl;
};

   
};

class C : private A { // we can;t accsess dummmy fun of class A in Class C  which is declare with private 
                        // becuse whatevr we declare in private in base class not gona comes in inharietance


public:
void funC1(){
    cout<<"this is funB1"<<endl;

   funA1()// whatevr we declare in private we can accses it from memeber function;
   funA2() 
};

void funC2(){
    cout<<"this is funB2"<<endl;
};

   
};





class D : private A { // inhairate class A inside class B whatever having in the public 


private :
int sum;

public:

void Docalcalculate(){

    sum=x+y; //  x and y from class A protected

    cout<<"sum"<<endl;
}



   
};









int main(){

B obj1;

C obj2;


D obj3

obj3.Docalcalculate();

obj2.funC1();

obj2.funC2();

obj1.funA1();

obj1.funA2();
obj1.funB1();
obj1.funB2();


}
