#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() { 
    map<int,int>mp;
    mp.insert(14,67);
    mp.insert(12,-4);
    mp.insert(-987,44);
    mp.insert(4,2);
    map<int,int>::iterator it;

    for(it=mp.begin();it!=mp.end();it++) {
        cout<<it->second<<" " <<it->first<<" ";
    }
    cout<<endl;
    map<int,int>m(mp.begin(),mp.end());
    map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++) {
        cout<<"Key:"<<it->first<<"Value:"<<it->second;
    }
    cout<<endl;
    return 0;
}