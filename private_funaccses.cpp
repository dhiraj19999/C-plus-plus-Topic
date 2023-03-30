#include <iostream>
using namespace std;
class base{
     private:
    int y=10;
     void private_fun(){

        cout<<" value of y is  "<<y;
        
    };
   
    public: 
    void public_fun(){
  private_fun();
        cout<<" value of y is  "<<y;
        
    };
    
    protected:
    void  protected_fun(){
  private_fun();
        cout<<" value of y is  "<<y;
        
    };
   


};

class derived:public base{
  public:
   void display_all (){
   
   public_fun();
   protected_fun();  
   }
   
 

};


int main(){
    derived obj;
obj.display_all ();
};