/*To print average of all elements in array.*/
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int arr[]={522,4,3233,2,6,7,88};
    int size=(sizeof(arr)/sizeof(arr[0]));
    cout<<"Size ->"<<size<<endl;
    int sum=0;
    for(int i=0;i<size;i++) {
        sum=sum+arr[i];
    }
    cout<<"Sum ->"<<sum<<endl;
    int average=(sum)/(size);
    cout<<"Average of elements in array ->"<<average;
    return 0;
}