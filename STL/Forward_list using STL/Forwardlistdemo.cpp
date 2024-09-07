#include<iostream>
#include<forward_list>
using namespace std;

void print(forward_list<int>f){
    for(int i:f) {
        cout<<i<<" ";
    }
}
int main() { 
    forward_list<int>f1;
    forward_list<int>f2;
    forward_list<int>f3;

    f1.push_front(1);
    f1.push_front(2);
    f1.push_front(3);
    cout<<"The first forward list:"<<endl;
    print(f1);
    f2.assign({1,5,7,4,3});
    cout<<endl;
    cout<<"The second forward list:"<<endl;
    print(f2);

    f3.assign(5,10);
    cout<<"\nThe list of f3:"<<endl;
    print(f3);
    return 0;
}