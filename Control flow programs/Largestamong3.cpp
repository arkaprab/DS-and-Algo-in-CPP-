#include<iostream>
using namespace std;

int main()  {
    int a=3,b=6,c=9;
    if(a>b && a>c){
        cout<<"Largest ->"<<a;
    }
    else if(b>a && b>c){
        cout<<"Largest ->"<<b;
    }
    else{
        cout<<"Largest ->"<<c<<endl;
    }
}