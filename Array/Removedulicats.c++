/**To remove duplicat elements form array */

#include<bits/stdc++.h>
using namespace  std;

int main() 
{ 
    vector<int> v={4,5,5,6,7,7,8,2,2,2,23,323,3};

    cout<<"Vector elements:"<<endl;
    for(auto i : v) {
        cout<<i<<" ";
    }
    cout<<"\n"<<endl;
    set<int> s(v.begin(),v.end());

    cout<<"After removing duplicate elements:"<<endl;
    for(int i:s) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Thank You."<<endl;
    return 0;
}