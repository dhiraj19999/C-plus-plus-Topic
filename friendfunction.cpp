#include <iostream>
using namespace std;
class basic_class num{

int x;
public:

friend void display (num n);
void get_data(int y)


  


};

void num::get_data(int y){
    x=y
}

void display(num n){
    cout <<"entered number is "<<n.x
}
int main(){

   num obj;
   obj.get_data(30);
   display(obj)

b1.sum(b1.first,b1.second);
};