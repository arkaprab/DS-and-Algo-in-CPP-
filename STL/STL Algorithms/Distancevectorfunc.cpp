#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void show(vector<int>v){
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main() { 
    int arr[]={3,4,3,3,4,6,5,6};
    int n=(sizeof(arr)/sizeof(arr[0]));
    vector<int>v(arr,arr+n);

    cout<<"\nDistance between first element and maximum element:"<<endl;
    cout<<distance(v.begin(),max_element(v.begin(),v.end()));

    next_permutation(v.begin(),v.end());
    cout<<"\nAfter performing next permutation:"<<endl;
    show(v);
    cout<<"After performing previous permuatation:"<<endl;
    prev_permutation(v.begin(),v.end());
    show(v);
    return 0;
}