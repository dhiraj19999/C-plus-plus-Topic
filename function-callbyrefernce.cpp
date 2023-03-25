


#include <iostream>
using namespace std;

int sum(int *a,int *b,int *c){   // we use astric sign to store refrence or address of varible

    return *a+*b+*c;
}


main(){

    int x,y,z;
    cout<<"Enter three numbers";
    cin>>x>>y>>z;
    cout<<"sum of three numbers is"<<sum(&x,&y,&z)

}