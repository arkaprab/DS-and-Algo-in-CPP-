#include<iostream>
#include<iterator>
#include<list>
using namespace std;

void show(list<int>l){
    list<int>::iterator i;
    for(i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }
}
int main() { 
    list<int>l={6,5,4,5,3,45,2};
    l.push_back(100);
    l.push_back(120);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"\n"<<endl;
    for(int i=0;i<10;i++){
        l.push_back(i);
    }
    for(int i:l){
        cout<<i<<" ";
    }
    show(l);
    list<int>l2={9,8,6,44};
    cout<<"\n"<<endl;
    l2.push_back(1);
    l2.push_back(99);
    l2.push_back(34);

    l2.push_front(88);
    l2.push_front(23);
    show(l2);
    l2.pop_front();
    l2.pop_back();

    cout<<"\n"<<endl;
    cout<<"Updated list:"<<endl;
    show(l2);
    l2.reverse();
    cout<<"\n"<<endl;;
    cout<<"Reversed list:"<<endl;
    show(l2);
    cout<<"Sorting the list:"<<endl;
    l2.sort();
    show(l2);
    return 0 ;
}