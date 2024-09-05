#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,6>ar={2,3,4,5,6,5};
    cout<<"Size->"<<ar.size()<<endl;
    cout<<"First element:"<<ar[0]<<endl;
    cout<<"Third element:"<<ar[3]<<endl;
    cout<<"Last element:"<<ar[ar.size()
    -1]<<endl;
    cout<<"Front element->"<<ar.front()<<endl;
    cout<<"Back element->"<<ar.back()<<endl;
}