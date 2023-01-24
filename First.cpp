


#include <iostream>
using namespace std;
class basic_class{


public:
int first,second; // public members of class or variebles//

int sum(int a,int b){ // member function //
cout<<"sum is "<<a+b;
  
}

};

int main(){

    basic_class b1; //oject name b1 from basic class

b1.first=100;
b1.second=200;

b1.sum(b1.first,b1.second);
};