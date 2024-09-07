#include<iostream>
#include<forward_list>
using namespace std;

void show(forward_list<int>f){
    for(auto i : f){
        cout<<i<<" ";
    }
    cout<<endl;;
}
int main() {
    forward_list<int>f={5,4,23,543,3,3,4};
    show(f);
    int value;
    cout<<"Enter the value you want to delete:"<<endl;
    cin>>value;

    f.remove(value);
    cout<<"Updated list:"<<endl;
    show(f);
    f.remove_if([](int x){return x > 20 ;});

    cout<<"After removing all elementts greater than 20->"<<endl;
    show(f);
    return 0;
}