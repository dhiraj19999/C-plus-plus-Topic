// Online C++ compiler to run C++ program online

using namespace std;
#include <iostream>

int max(){
    
 int arr[4]={2,8,4,5};
 int sum_count=0;
 int sum=0;
 for(int i=0;i<4;i++){
     sum=sum+arr[i];
     
     if(arr[i]%2==0){
         sum_count++;
     }
 };
  cout<<"sum-count is : "<<sum_count<<endl;
 return sum;
    
    
};

int main() {
    // Write C++ code here
    int res;
    res=max();
   cout<<"sum is : "<<res<<endl;
   

    return 0;
}
