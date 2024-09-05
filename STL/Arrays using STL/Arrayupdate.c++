#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,7>arr={7,6,4,4,45,2,3};
    cout<<"First element of the array->"<<arr.front()<<endl;
    cout<<"Last element of the array->"<<arr.back()<<endl;
    
    arr[0]=100;
    arr[arr.size()-1]=98;
    cout<<"The array elements are updated:"<<endl;
    cout<<endl;
    cout<<"The updated array set:"<<endl;
    for(auto i : arr){
        cout<<i<<endl;
    }

}