#include<bits/stdc++.h>
using namespace std;

int main()  
{
    int arr1[]={2,6,5,4,1};
    int brr1[]={975,9,33,2,55,4};

    int size1=(sizeof(arr1)/sizeof(arr1[0]));
    int size2=(sizeof(brr1)/sizeof(brr1[0]));

    sort(arr1,arr1+size1);
    sort(brr1,brr1+size2);

    for(int i=0;i<size1;i++) {
        if(arr1[i] == brr1[i]) {
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
    }
}