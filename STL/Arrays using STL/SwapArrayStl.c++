#include<iostream>
#include<array>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    array<int,3>ar={5,3,4};
    array<int,4>w={34,6,7};
    ar.swap(w);
    cout<<ar.front()<<endl;
    cout<<w.back()<<endl;
    return 0;
}