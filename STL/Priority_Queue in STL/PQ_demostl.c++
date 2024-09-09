#include<iostream>
#include<array>
#include<queue>
using namespace std;

void show(priority_queue<int>q) {
    while(!q.empty()) {
        cout<<q.top()<<" ";
        q.pop(); 
    }
}
void showarray(int arr[],int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arr[5]={1,2,3,4,5};
    showarray(arr,5);
    priority_queue<int>pq;
    show(pq);

    return 0;
}