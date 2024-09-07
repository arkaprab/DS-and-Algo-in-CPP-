/*To demonstrate the clear function in 'Forward list' in C++ */
#include<iostream>
#include<forward_list>
using namespace std;

void show(forward_list<int>v) {
    forward_list<int>::iterator it;
    for(it=v.begin();it!=v.end();it++) {
        cout<<*it<<" ";
    } 
    cout<<endl;
}
int main() {
    forward_list<int>v={2,3,3,3,45,6,5,7,8,6};
    cout<<"Sample forward list->"<<endl;
    show(v);
    int element;
    cout<<"Enter an element to removE:"<<endl;
    cin>>element;
    v.remove(element);
    cout<<"Updated forward list:"<<endl;
    show(v);

    cout<<"To remove all the elements greater than 40:"<<endl;
    v.remove_if([](int x) {
        return x> 40;
    });
    show(v);

    v.clear();
    cout<<"After clearing the entire forward list:"<<endl;
    show(v);
    return 0;
}