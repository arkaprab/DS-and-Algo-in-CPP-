#include<iostream>
#include<vector>
using namespace std;

int main() { 
    vector<int>g;
    for(int i=1;i<=8;i++){
        g.push_back(i);
    }
    cout<<"\nVector elements:"<<endl;
    for(int i:g){
        cout<<i<<" ";
    }
    cout<<"\nSize of the vector:"<<g.size()<<endl;
    cout<<"Capacity of the vector:"<<g.capacity()<<endl;
    cout<<"Max size of the vector:"<<g.max_size()<<endl;

    cout<<"Resizing the vector:"<<endl;
    g.resize(2);
    for(int i:g){
        cout<<i<<" ";
    }
    if(g.empty()==false){
        cout<<"\nVector is not empty."<<endl;
    }
    else{
        cout<<"\nVector is empty."<<endl;
    }
    cout<<"Iterating the vector using 'iterative func.':"<<endl;
    vector<int>::iterator it;
    for(it=g.begin();it!=g.end();it++){
        cout<<*it<<endl;
    }
    cout<<endl;
    return 0;
}