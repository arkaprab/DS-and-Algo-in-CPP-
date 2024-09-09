#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main() { 
    multiset<int,greater<int>> m;
    m.insert(23);
    m.insert(12);
    m.insert(12);
    m.insert(56);
    m.insert(43);

    multiset<int,greater<int>>::iterator it;
    cout<<"Given first multiset:"<<endl;
    for(it=m.begin();it!=m.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
    multiset<int,greater<int>>m1(m.begin(),m.end());

    cout<<"The second copied multiset:"<<endl;
    for(it=m1.begin();it!=m1.end();it++) {
        cout<<*it<<" ";
    }
    int element=m1.erase(43);
    cout<<"Element erased ->>"<<element<<endl;

    cout<<endl;
    cout<<"Multiset updated->"<<endl;
    for(it=m1.begin();it!=m1.end();it++) {
        cout<<*it<<" ";
    }
    cout<<"Lower end:"<<*m1.lower_bound(12)<<endl;

    cout<<"Upper end:"<<*m1.upper_bound(12)<<endl;
    return 0;

    cout<<endl;
    int y;
    cout<<"Enter a number to find upper and lower bound:"<<endl;
    cin>>y;

    cout<<"Upper bound:"<<*m1.upper_bound(y)<<endl;
    cout<<"Lower bound:"<<*m1.lower_bound(y);
}