#include<iostream>
#include<set>
using namespace std;

int main() { 
    set<int,greater<int>>g;
    g.insert(23);
    g.insert(32);
    g.insert(1234);

    cout<<"The given set:"<<endl;
    for(auto &i:g){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}