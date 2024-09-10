#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main() {
    int arr[]={23,4,1,6,9,-1,33};
    int size=(sizeof(arr)/sizeof(arr[0]));
    vector<int>v(arr,arr+size);
    cout<<"The vector is ->"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\nImplementing sorting functions:"<<endl;
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"Vector after applying sorting function:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\nAfter sorting in descending order:"<<endl;
    sort(v.begin(),v.end(),greater<int>());
    cout<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    reverse(v.begin(),v.end());
    cout<<"\nAfter reversing the vector:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<"\nMaximum element of the vector:"<<endl;
    cout<<*max_element(v.begin(),v.end());
    cout<<"\nMinimum element of the vector:"<<endl;
    cout<<*min_element(v.begin(),v.end());

    cout<<"\nThe summation of the vector is :"<<endl;
    cout<<accumulate(v.begin(),v.end(),0)<<endl;
    return 0;
}