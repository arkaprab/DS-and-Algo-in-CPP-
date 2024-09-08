#include<iostream>
#include<queue>
using namespace std;

void show(queue<int>q){
    while(!q.empty()){
        cout<<" "<<q.front();
        q.pop();
    }
    cout<<endl;
}
int main() { 
    queue<int>q;
    q.push(23);
    q.push(49);
    q.push(34);
    q.push(23);
    show(q);
    cout<<"The first element of the queue:"<<q.front()<<endl;
    cout<<"The last element of the queue:"<<q.back()<<endl;
    cout<<"The size of the queue:"<<q.size()<<endl;

    cout<<"Queue after pop operation:"<<endl;
    q.pop();
    q.pop();
    show(q);

    queue<int>q1;
    for(int i=6;i<56;i=i+3){
        q1.push(i);
    }
    cout<<"The second queue:"<<endl;
    show(q1);

    q1.swap(q);
    cout<<"The second queue after swapping:"<<endl;
    show(q1);
    cout<<"The first queue after swapping:"<<endl;
    show(q);
    return 0;
}