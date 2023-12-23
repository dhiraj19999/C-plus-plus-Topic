using namespace std;
#include <iostream>

// function overloading : it means similar name of functions with differnt tasks

class Test{

public:

void fun1(int x,int y){
cout<<x+y<<endl;
};

void fun1(int x,float y){

cout<<x*y<<endl;

};

void fun1(int a){
    
};

void fun1(int a,int b,int c){
    
};



}







int main() {
    
// depending on number of parameters and order of parametres function get called this is first way for fun overloading
// depending on parameter type  function get called this is second way for fun overloading

    Test t1;
    
    t1.fun1(20,10);
     t1.fun1(20);
      t1.fun1(20,10,100);

       t1.fun1(20,15.90);
   

   

    return 0;
}

/*

// command line argumnts

reciving arguments from outside the program


int main(int argc, char** argv) {
    
   cout<<"no of arguumnets="<<argc<<endl;

  for (int i=0;i<argc;i++){
 cout<<argv[i]<<endl;
  }

  
}

char x; x="a"; x="b";

char* x; x="dhiraj"

char** x="dhiraj","suraj","garad"

x[2]="garad"
          

*/
