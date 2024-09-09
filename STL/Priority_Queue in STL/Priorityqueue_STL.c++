#include<iostream>
#include<queue>
#include<string>
#include<array>
using namespace std;

int main() {
    array<int,8>arr={1,2,3,4,5,6,7,8};
    priority_queue<int>pq;

    cout<<"The given array set:"<<endl;
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;;
    for(int i=0;i<arr.size();i++) {
        pq.push(arr[i]);
    }
    cout<<"The given priority queue:"<<endl;

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}