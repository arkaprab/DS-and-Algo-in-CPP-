#include<bits/stdc++.h>
using namespace std;

bool checkarrays(int a[],int m,int b[],int n) 
{
    sort(a,a+m);
    sort(b,b+n);
    for(int i=0;i<n;i++) {
        if(a[i] == b[i]) {
            return 1;
        }
    } 
    return 0;
}
int main() 
{ 
    int arr1[]={1,2,3,4};
    int arr2[]={2,4,22,2};
    if((checkarrays(arr1,4,arr2,4)) == true){
        cout<<"Arrays are equal."<<endl;
    }
    else{
        cout<<"Arrays are unequal."<<endl;
    }
    return 0;
}
