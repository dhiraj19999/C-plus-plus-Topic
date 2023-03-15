


#include <iostream>
using namespace std;

class copy{

    private:
    int x,y;

    public:
    copy(int x1,int y1){
   x=x1;
   y=y1;
    }

    copy(const copy & old){

    x=old.x1;
    y=old.y
}

void display(){

    cout<<x<<""<<y<<endl;
}
}

main(){
    copy obj1(20,30)
    copy obj2=obj1
    cout<<"constructor";
    obj1.display()
    cout<<" copy constructor";
    obj2.display()
}

