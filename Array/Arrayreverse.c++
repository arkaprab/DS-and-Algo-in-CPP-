#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n) {
    int start=0;
    int end=n-1;

    while (start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
        /* code */
    }   
}
int main() 
{
    int arr[5]={1,2,3,4,5};
    int brr[5];
    int n=(sizeof(arr)/sizeof(arr[0]));
    
    cout<<endl;
    reverse(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    
    return 0;
}
