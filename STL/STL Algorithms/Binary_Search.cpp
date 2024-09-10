#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;

void show(vector<int>v){
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main() { 
    int a[]={5,6,4,3,5,43};
    int size=(sizeof(a)/sizeof(a[0]));
    vector<int>v(a,a+size);
    cout<<"Vector:"<<endl;
    show(v);
    sort(v.begin(),v.end());
    cout<<"After sorting:"<<endl;
    show(v);

    int element;
    cout<<"Enter an element to search:"<<endl;
    cin>>element;
    bool i=binary_search(a,a+size,element);
    if(i==0) {
        cout<<"Element found in the array."<<endl;
    }
    else if(i==1){
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
}