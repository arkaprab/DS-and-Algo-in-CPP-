#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main() { 
    int n=6;
    int m=8;

    int arr1[m]={1,8,7,6,6,6,3,4};
    int arr2[n]={2,5,4,3,2,1};
    int merged[m+n];

    for(int i=0;i<m;i++) {
        merged[i]=arr1[i];
    }
    for(int i=0;i<n;i++) {
        merged[m+i]=arr2[i];
    }
    for(auto i : merged) {
        cout<<i<<" ";
    }
    int sizee=(sizeof(merged)/(sizeof(merged[0])));

    sort(merged,merged+sizee);
    cout<<"\n"<<endl;
    for(auto i : merged) {
        cout<<i<<" ";
    }
    return 0;
}