#include<iostream>
#include<array>
using namespace std;

int main() { 
    array<int,4>arr1={2,3,4,5};
    array<int,4>arr2={7,8,5,3};

    cout<<"First array elements:"<<endl;
    for(int i:arr1){
        cout<<i<<" ";
    }
    cout<<"\n"<<endl;
    cout<<"Second array elements:"<<endl;
    for(int i:arr2){
        cout<<i<<" ";
    }
    arr2.swap(arr1);
    cout<<"\nAfter swapping first array elements:"<<endl;
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"\n"<<endl;
    cout<<"Second array:"<<endl;
    for(int i:arr2){
        cout<<i<<" ";
    }
    cout<<"\nFront and back elements of the first array:"<<endl;
    cout<<arr1.front()<<"\n";
    cout<<arr1.back()<<"\n";

    cout<<"Front and back elements of the second array:"<<endl;
    cout<<arr2.front()<<endl;
    cout<<arr2.back()<<endl;
    return 0;
}