#include<iostream>
#include<forward_list>
using namespace std;

int main() { 
    forward_list<int>f={323,23,23,12,2,34,344546,6,43,2};
    forward_list<int>::iterator arka;
    cout<<"Forward lists:"<<endl;
    for(arka=f.begin();arka!=f.end();arka++) {
        cout<<*arka<<" ";
    }
    cout<<endl;
    forward_list<int>::iterator i;
    i=f.insert_after(f.begin(),{100,9});

    cout<<"Updated lists:"<<endl;
    for(i=f.begin();i!=f.end();i++) {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"After removing all values within a given range:"<<endl;

    i=f.erase_after(f.begin(),f.end());
    for(int out:f){
        cout<<out<<" ";
    }
    cout<<"Thank You."<<endl;
    return 0;
}