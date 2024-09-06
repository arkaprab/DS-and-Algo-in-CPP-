#include<iostream>
#include<list>
using namespace std;

int main() { 
    list<int>l={2,3,4};
    for(int i:l){
        cout<<i<<" ";
    }
    return 0;
}