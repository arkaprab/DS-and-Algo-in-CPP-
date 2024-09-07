#include<iostream>
#include<forward_list>
using namespace std;

void show(forward_list<int>v) {
    for(int u : v){
        cout<<u<<" ";
    }
    cout<<endl;
}
int main() { 
    forward_list<int>f={12,23,34,5,656};
    forward_list<int>g={2,3,4,4,5};

    g.splice_after(g.begin(),f);
    cout<<"The second list after splicing:"<<endl;
    show(g);

    return 0;
}