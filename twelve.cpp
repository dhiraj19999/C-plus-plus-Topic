#include<iostream>  
using namespace std; 

//storage classes: AUTO, Static,Extern,Regiister;

int k=200; // global varibles
void myfun(){

int x=600; // local varibles

 auto int y=600; // local varibles are auto varibles by deafult

cout<<"x"<<x<<endl

cout<<"k"<<k<<endl
};




void fun(){

    static int times=0; // static declare varible just one time no repeat declration
    times=times+1;

    return times
};











int main(){

int x=100;  // local varibles

cout<<"x"<<x<<endl
myfun();
cout<<"k"<<k<<endl


int time;
 time=fun();
 time=fun();
 time=fun();
 time=fun();
 time=fun();

cout<<"no of times fun called"<<time<<endl;// it gives 5 










return 0;
}
