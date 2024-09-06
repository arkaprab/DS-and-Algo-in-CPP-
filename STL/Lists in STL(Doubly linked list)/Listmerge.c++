#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int>l={45,66,77,88};
    list<int>k={5,4,3,2};

    cout<<"First list:"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"Second list:"<<endl;
    for(int i:k){
        cout<<i<<" ";
    }
    l.merge(k);
    cout<<"\nMerged list:"<<endl;
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    l.sort();
    for(int i:l){
        cout<<i<<" ";
    }
    return 0;
}