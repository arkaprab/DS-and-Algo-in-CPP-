/*To count all occurences of an elements. */

#include<bits/stdc++.h>
using namespace std;

int occrence(int arr[],int n,int key)
{
    double count=0;
    for(int i=0;i<n;i++) {
        if(arr[i] == key) {
            count++;
        }
    }
    return count;
}
int main () 
{ 
    int arr[91]= {1,22,4,4,4,5,6,7};
    cout<<occrence(arr,7,4)<<" ";
    return 0;
}