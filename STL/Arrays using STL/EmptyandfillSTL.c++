#include<bits/stdc++.h>
#include<iostream>
#include<array>
using namespace std;

int main() { 
    array<int,4>arr={2,3,4,5};
    array<int,4>brr={5,4,3,2};

    bool flag1=arr.empty();
    bool flag2=brr.empty();

    if(flag1){
        cout<<"The first array is empty."<<endl;
    }
    else{
        cout<<"The first array is not empty."<<endl;
    }
    if(flag2){
        cout<<"The second array is empty."<<endl;
    }
    else{
        cout<<"The second array is not empty."<<endl;
    }
    arr.fill(55);
    brr.fill(44);
    cout<<"After filling operation:"<<endl;
    cout<<"First array->"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<"\nSecond array->"<<endl;
    for(int i:brr){
        cout<<i<<" ";
    }
    return 0;
}