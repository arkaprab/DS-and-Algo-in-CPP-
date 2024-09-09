#include<iostream>
#include<set>
using namespace std;

void show(set<int>s) {
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
} 
int main() { 
    set<int>s;
    s.insert(1);
    s.insert(4);
    s.insert(8);

    cout<<"First set:\n"<<endl;
    for(auto i : s) {
        cout<<i<<" ";
    }
    cout<<endl;
    set<char>set;
    set.insert('A');
    set.insert('P');
    set.insert('C');

    cout<<"Second set:"<<endl;
    for(auto &i: set) {
        cout<<i<<" ";
    }
    return 0;
}