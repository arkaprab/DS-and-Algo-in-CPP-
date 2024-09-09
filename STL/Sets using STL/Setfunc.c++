#include<iostream>
#include<set>
using namespace std;

int main() { 
    set<int,greater<int>>s;
    s.insert(23);
    s.insert(48);
    s.insert(23);
    s.insert(76);
    s.insert(32);
    s.insert(230);
    s.insert(23);
    s.insert(230);

    set<int,greater<int>>::iterator it;
    cout<<"\n The first set:"<<endl;
    for(it=s.begin();it!=s.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    set<int,greater<int>>s1(s.begin(),s.end());

    cout<<"\n The second set :"<<endl;
    for(it=s1.begin();it!=s1.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Removing elements lesser than 30:"<<endl;

    s1.erase(s1.begin(),s1.find(30));
    for(it=s1.begin();it!=s1.end();it++) {
        cout<<*it<<" ";
    }
    cout<<"Lower bound ->"<<*s.lower_bound(23);
    cout<<"Upper bound ->"<<*s.upper_bound(230);
    cout<<"Lower bound ->"<<*s.lower_bound(32);
    cout<<endl;
    cout<<"Size of the set ->"<<s.size()<<endl;
    s.clear();
    cout<<"Cleared set:"<<endl;
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<"Thank You"<<endl;
    return 0;
}