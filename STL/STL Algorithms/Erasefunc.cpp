#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

void show(vector<int>arr) {
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main() { 
    int arr[]={23,34,56,56,56,76,89,89};
    int n=(sizeof(arr)/sizeof(arr[0]));
    vector<int>v(arr,arr+n);
    cout<<"The given vector:"<<endl;
    show(v);
    int element;
    cout<<"Enter the value you want to erase:"<<endl;
    cin>>element;
    v.erase(find(v.begin(),v.end(),element));

    cout<<"After removing the desired element:"<<endl;
    show(v);

    v.erase(unique(v.begin(),v.end()),v.end());
    cout<<"After removing the duplicate element:"<<endl;
    show(v);
    return 0;
}