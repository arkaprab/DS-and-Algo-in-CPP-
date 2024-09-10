#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() { 
    int arr[]={2,3,4,5,6,7,6,5,4,3};
    int n=sizeof(arr)/sizeof(arr);
    vector<int>v(arr,arr+n);

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    int value;
    cout<<"Enter the value you want to find lower and higher "<<endl;
    cin>>value;
    auto p=lower_bound(v.begin(),v.end(),value);
    auto q=upper_bound(v.begin(),v.end(),value);

    cout<<"\nThe upper bound:"<<endl;
    cout<<q-v.begin()<<endl;
    cout<<"\nThe lower bound:"<<endl;
    cout<<p-v.begin()<<endl;

    return 0;

}