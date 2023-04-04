// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//
class employee{
public:
int eid;
char name[10];
void getdata(){
cout<<"Enter Employee ID"<<endl;
cin>>eid;
cout<<"Enter Name:";
cin>>name;

};
};
class salary:public employee{
public:
int salary;

void getsalary(){
    cout<<"Enter salary"<<endl;
cin>>salary;
};


};

class address:public salary{
public:
char address[30];
    void getaddress(){

       cout<<"Enter address"<<endl;
cin>>address; 
    };

    void display_all(){
        cout<<"Employee Name:"<<name<<endl;
         cout<<"Employee ID:"<<eid<<endl;
          cout<<"Employee Salary:"<<salary<<endl;
           cout<<"Employee Address:"<<address<<endl;

    };
};


main(){

    address obj;

    obj.getdata();
    obj.getsalary();
    obj.getaddress();
    obj.display_all();
};