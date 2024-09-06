#include<iostream>
#include<stack>
using namespace std;

int main() { 
    stack<int>s;
    s.push(3);
    s.push(66);
    s.push(23);
    s.push(9);
    cout<<"Size of the stack->"<<s.size()<<endl;
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}