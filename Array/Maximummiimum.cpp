#include<bits/stdc++.h>
using namespace std;

int getmin(int arr[],int n) 
{
    int minn=*min_element(arr,arr+n);
    return minn;
}
int getmax(int arr[],int n) 
{
    int maxx=*max_element(arr,arr+n);
    return maxx;
}
int main() 
{ 
    int arr[]={7,7,5,4,5,4,1,100,14,2,3};
    int size=(sizeof(arr)/sizeof(arr[0]));
    cout<<getmin(arr,size)<<endl;
    cout<<getmax(arr,size)<<endl;

}