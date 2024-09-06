#include<iostream>
#include<stack>
using namespace std;

void show(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main() { 
    stack<int>s1;
    stack<int>s2;

    s1.push(23);
    s1.push(45);
    s1.push(88);

    s2.push(88);
    s2.push(43);
    s2.push(-1);
    s2.push(-34);

    cout<<"Size of the stack 1->"<<s1.size()<<endl;
    cout<<"Size of the stack 2->"<<s2.size()<<endl;

    cout<<"\nFirst stack->"<<endl;
    show(s1);
    cout<<"\nSecond stack->"<<endl;
    show(s2);

    cout<<"\nAfter stack swapping:"<<endl;
    s1.swap(s2);
    cout<<"First Stack:"<<endl;
    show(s1);
    cout<<"\n"<<endl;
    cout<<"Second Stack:"<<endl;
    show(s2);
    return 0;
}