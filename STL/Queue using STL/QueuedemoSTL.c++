#include<iostream>
#include<queue>
using namespace std;

void show(queue<int>q) {
    queue<int>qu=q;
    while(!qu.empty()) {
        cout<<" "<<qu.front();
        qu.pop();
    }
    cout<<"\n"<<endl;
}
int main() {
    queue<int>q; 
    q.push(1);
    q.push(3);
    q.push(4);

    cout<<"First queue:"<<endl;
    show(q);
    for(int i=2;i<30;i=i+3) {
        q.push(i);
    }
    cout<<"Second queue:"<<endl;
    show(q);

    cout<<"Front element of the queue:"<<q.front()<<endl;
    cout<<"Size of the queue:"<<q.size()<<endl;
    cout<<"Back element of the queue:"<<q.back()<<endl;
    return 0;
}