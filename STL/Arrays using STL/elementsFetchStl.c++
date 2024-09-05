#include<bits/stdc++.h>
#include<array>
#include<iostream>
using namespace std;

int main() 
{ 
    array<int,3>ar={4,5,6};
    for(auto i:ar){
        cout<<i<<" "<<endl;
    }
    //Array elements fetching using get()method.
    cout<<"Array using at() method:"<<endl;
    for(int i=0;i<ar.size();i++){
        cout<<ar.at(i)<<" ";
    }
    cout<<endl;
    cout<<"Getting array elements using get()method."<<endl;
    cout<<"First element in the array->"<<get<0>(ar)<<endl;
    cout<<"Second element in the array->"<<get<1>(ar)<<endl;
    cout<<"Third element in the array->"<<get<2>(ar)<<endl;

    cout<<"Getting elements using operator:"<<endl;
    int size=(sizeof(ar)/sizeof(ar[0]));
    for(int i=0;i<size;i++){
        cout<<ar[i]<<" "<<endl;
    }
    return 0;
}