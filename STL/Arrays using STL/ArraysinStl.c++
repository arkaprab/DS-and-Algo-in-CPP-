#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<array>
#include<vector>

using namespace std;

int main() 
{
    array<int,5>ar={2,3,4,5,5};
    cout<<"Size of the array->"<<ar.size()<<endl;
    array<int,4>ar1={4,3,2,3};
    cout<<"Size of the second array->"<<ar1.size()<<endl;
    cout<<"1st Array elements:"<<endl;
    for(int i:ar){
        cout<<i<<" ";
    }
    cout<<"\nSecond Array elements:"<<endl;
    for(int i:ar1){
        cout<<i<<" ";
    }
    return 0;
}
