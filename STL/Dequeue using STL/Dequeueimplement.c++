#include<iostream>
#include<deque>
using namespace std;\

void show(deque<int>d) {
    deque<int>::iterator it;
    for(it=d.begin();it!=d.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main() { 
    deque<int>d;
    d.push_back(1);
    d.push_back(3);
    d.push_back(4);
    d.push_back(7);

    d.push_front(23);
    d.push_front(78);
    d.push_front(100);
    d.push_back(100);

    cout<<"The given deque is:"<<endl;
    show(d);
    cout<<"Size of the deque :"<<d.size()<<endl;
    cout<<"The front element of queue:"<<d.front()<<endl;
    cout<<"The back element of the queue:"<<d.back()<<endl;

    d.pop_front();
    d.pop_back();

    cout<<"After performing the pop_back operation:"<<endl;
    cout<<"Deque is updated.."<<endl;
    show(d);
    cout<<"Cleared queue:"<<endl;
    d.clear();
    show(d);
    cout<<"Is the queue is empty:"<<d.empty()<<endl;
    return 0;
}