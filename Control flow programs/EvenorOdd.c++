#include<iostream>
using namespace std;

bool isEven(int num) {
    if(num%2==0) {
        return true;
    }
    else{
        return false;
    }
}
int main() { 
    int a=56;
    bool flag=isEven(a);
    if(flag) {
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    return 0;
}