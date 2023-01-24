// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class find_sum{
    public:
    int x,y;
    
    void getdata();
    int displaysum();
};

void find_sum::getdata(){ // memebr fuction outside the class we can access by double semi colon ::
   
   cout<<"enter numbers";
   cin>>x>>y;
   
};

int find_sum::displaysum(){   // memebr fuction outside the class we can access by double semi colon ::
   
return x+y;
   
   
};
    
    int main(){
       find_sum sum1;
       
       sum1.getdata();
       cout<<"Sum is"<<sum1.displaysum();
        
    }
    
