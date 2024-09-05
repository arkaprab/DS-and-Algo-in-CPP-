#include<iostream>
#include<array>
using namespace std;

int main() { 
    array<int,15>arr={3,4,5,6,7};
    cout<<"The number of array elements:"<<endl;
    cout<<arr.size()<<endl;
    cout<<"Maximum size of the array:"<<endl;
    cout<<arr.max_size()<<endl;
    return 0;
}