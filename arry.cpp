// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class student{
    
    public:
    
    int marks[5];
    void input_marks();
    void display_marks();
};

void student::input_marks(){
    
    cout<<"input marks";
    
    for(int i=0;i<=4;i++){
        
        cin>>marks[i];
    }
};


void student::display_marks(){
    
    cout<<"marks are"<<endl
    ;
    for(int i=0;i<=4;i++){
        
        cout<<marks[i]<<endl;
    }
};


int main(){
    
    student s1;
    s1.input_marks();
    s1.display_marks();
}
