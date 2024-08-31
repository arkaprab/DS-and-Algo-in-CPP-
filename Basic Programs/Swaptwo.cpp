#include<iostream>
using namespace std;

int main() { 
    int a=5,b=3;
    cout<<"A:"<<a<<endl;
    cout<<"B:"<<b<<endl;

    int temp=a;
    a=b;
    b=temp;
    cout<<endl;
    cout<<"After swapping:"<<endl;
    cout<<"A:"<<a<<endl;
    cout<<"B:"<<b<<endl;
}