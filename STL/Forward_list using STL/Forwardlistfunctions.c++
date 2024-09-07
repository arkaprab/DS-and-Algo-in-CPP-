#include<iostream>
#include<forward_list>
#include<vector>
using namespace std;

int main() { 
    forward_list<int>f;
    int a,b,c;
    cout<<"Enter three values one by one:"<<endl;
    cin>>a>>b>>c;
    
    f.push_front(a);
    f.push_front(b);
    f.push_front(c);

    cout<<"Forward list->"<<endl;
    for(int i:f){
        cout<<i<<" ";
    }
    cout<<endl;
    int value;
    cout<<"Enter a value to insert at first:"<<endl;
    cin>>value;
    f.emplace_front(value);
    f.emplace_front(1000);

    cout<<"The updated forward lists using iterators:"<<endl;

    forward_list<int>::iterator it;
    for(it=f.begin();it!=f.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}