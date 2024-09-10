#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() { 
    int arr[]={23,43,43,43,6,88,9,5,2,1,13};
    int n=(sizeof(arr)/sizeof(arr[0]));
    vector<int>v(arr,arr+n);
    cout<<"\nThe vector is :"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    int element;
    cout<<"Enter the element you want to find the occurences:"<<endl;
    cin>>element;

    cout<<"\nThe occurences:"<<endl;
    cout<<count(v.begin(),v.end(),element)<<endl;
}