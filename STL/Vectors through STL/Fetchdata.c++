#include<iostream>
#include<vector>
using namespace std;

void show(vector<int>v){
    for(int i:v){
        cout<<i<<" ";
    }
}
int main() { 
    vector<int>v={3,4,5,3,5,3};
    cout<<"First array elementS:"<<endl;
    show(v);
    vector<int>b;
    for (int i=0;i<125;i=i+15){
        b.push_back(i);
    }
    cout<<"\n"<<endl;
    cout<<"Second vector elements:"<<endl;
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<"Second element of the second vector:"<<b[2]<<endl;
    cout<<"First and last element of the first vector:"<<v.front()<<" "<<v.back()<<endl;
    cout<<"First and last element of the second vector:"<<b.front()<<" "<<b.back()<<endl;

    int pos;
    cout<<"Enter the position of the second vector element you want to find:"<<endl;
    cin>>pos;
    cout<<"Vector element of the current position:"<<b[pos]<<endl;
    return 0;
}