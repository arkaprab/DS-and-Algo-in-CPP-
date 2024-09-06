#include<vector>
#include<iostream>
using namespace std;

int main() {
    vector<int>v;
    v.assign(5,10);
    cout<<"Vector elements:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<i<<" ";
    }
    v.push_back(100);
    cout<<"\nModified vector:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    int n=v.size();
    cout<<"Last element:"<<v[n-1]<<endl;
    v.pop_back();
    cout<<"Modified:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    v.pop_back();
    v.pop_back();
    cout<<"\n"<<endl;
    cout<<"After deleting the last elements:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    int element;
    cout<<"Enter an element you want to insert in the beginning:"<<endl;
    cin>>element;
    v.insert(v.begin(),element);
    for(int i=0;i<v.size();i++){
        cout<<i<<" ";
    }
    cout<<"After removing the first element:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    v.erase(v.begin());
    v.clear();
    cout<<"After removing all the element in the vector:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"Vector size after clear:"<<v.size()<<endl;;

    v.push_back(1);
    v.push_back(100);
    v.push_back(1000);

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\nIs the vector empty:"<<v.empty()<<endl;
    v.emplace(v.begin(),2);
    for(int i:v){
        cout<<i<<endl;
    }
    return 0;
}
