#include<bits/stdc++.h>
using namespace std;

void show(vector<int>v){
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main() { 
    vector<int>v={443,223,6,5,4,5,5};
    cout<<"The given vector ->"<<endl;
    show(v);
    next_permutation(v.begin(),v.end());
    cout<<"Vector after performing next permutation:"<<endl;
    show(v);
    prev_permutation(v.begin(),v.end());
    cout<<"After performing previous permuation:"<<endl;
    show(v);
    cout<<endl;
    cout<<"Thank You..."<<endl;
    return 0;
}