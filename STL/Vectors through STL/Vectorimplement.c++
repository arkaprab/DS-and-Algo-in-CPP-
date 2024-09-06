#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main() { 
    vector<int>v={1,2,3};
    cout<<"Vector->"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<"\n"<<endl;
    cout<<"Inserting elements in vector within range->"<<endl;
    for(int i=1;i<=12;i++){
        v.push_back(i);
    }
    cout<<"Updated vector:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Printing elements of vector using iterative approach:"<<endl;
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;;
    return 0;
}