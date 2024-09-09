#include<iostream>
#include<queue>
using namespace std;

void showpq(priority_queue<int>pq) {
    priority_queue<int>g=pq;
    while (!g.empty()) {
        cout<<" "<<g.top();
        g.pop();
    }
    cout<<endl;
}
int main() {
    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(22);
    pq.push(11);

    cout<<"The priority queue is:"<<endl;
    showpq(pq);
    cout<<"Size of the priority queue:"<<pq.size()<<endl;
    
    return 0;
}