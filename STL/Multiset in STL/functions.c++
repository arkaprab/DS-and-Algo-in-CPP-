#include<bits/stdc++.h>
#include<set>
#include<iostream>
using namespace std;

int main() {
    multiset<int>a;
    a.insert(23);
    a.insert(12);
    a.insert(76);
    a.insert(23);
    a.insert(32);
    a.insert(11);

    for(auto i : a){
        cout<<i<<" ";
    }
    int element;
    cout<<"Enter an element to find frequency:"<<endl;
    cin>>element;
    cout<<"Count->"<<a.count(element);
    int key;
    cout<<"Enter the element to delete:"<<endl;
    cin>>key;

    a.erase(a.find(key));
    cout<<"The updated multiset:"<<endl;
    for(auto i : a){
        cout<<i<<" ";
    }
    return 0;
}