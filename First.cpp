


#include<iostream>  // iostream is class with all functinality like cout we can't use cout without iostream

using namespace std; // whatevr varible we create get stored and retrived from namespace std
// namespace is storage space
class demo{

    public:
    int f_num,s_num // data memeber;

    void sum(int a,int b){ // member function
        cout<<a+b;
    }
};
//  void means nothing, nothing to return

int main(){

demo d1; // d1 is object here

d1.sum(d1.f_num=10,d1.s_num=39);

cout << endl <<"Program ended"<< endl;
//return 0

};
