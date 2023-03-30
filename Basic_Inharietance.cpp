#include <iostream>
using namespace std;
class base{
    private:
    int x=90;
    
    public:
    char name [20];
    int salary ;
    void disp(){

        cout<<"x is"<<x
    }
   
void set_data(){

        cout<<"Enter Name";
        cin>>name;
         cout<<"Enter salary";
        cin>>salary;
    };


};

class derived:public base{
     private:
    int y;
    public: 
    void get_data(){

        cout<<"Enter value";
        cin>>y;
    };
    void show_data(){

        cout<<"Enter value"<<y<<endl;
        cout <<"name is "<<name;
        cout<<"salary is"<salary;
    };



}


int main(){
    
    derived obj; 
obj.disp();
obj.get_data();
obj.set_data()
obj.show_data();
}