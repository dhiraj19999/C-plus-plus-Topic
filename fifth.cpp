

#include<iostream>  
using namespace std; 

class demo{

    private:
    int  bag[10];
     
 int n; 
    public:
    void input_data();
    int sum();

   
};



void demo :: input_data(){ // :: scope resoltuion oprator

 cout <<"Enter the number of data:" << endl;
 cin >> n
 
 for(int i=0;i<n;i++){

    cin>>bag[i];
 }

 cout <<"data is enterd"<<endl
 
} ;

int demo :: sum(){
  int sum=0;
   for(int i=0;i<n;i++){

    sum=sum+bag[i]
 }
};








int main(){

demo d1; // d1 is object here



int result ;
d1.input_data();

result=d1.s_num();

cout<<"the result of program is="<<result<<endl;

};

//
