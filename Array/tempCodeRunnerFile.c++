#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int arr[5]={1,2,3,4,5};
    int brr[5];
    int n=(sizeof(arr)/sizeof(arr[0]));
    for(int i=n;i>=0;i--) {
        brr[i] = arr[i];
    }
    for(int i=0;i<5;i++ ){
        cout<<brr[i]<<" ";
    } 
    cout<<endl;
    return 0;
}
