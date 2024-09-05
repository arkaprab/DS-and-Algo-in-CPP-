#include<array>
#include<algorithm>
#include<iostream>

using namespace std;
int main()
{
    array<int,3>a={3,5};
    bool x=a.empty();
    cout<<x<<endl;
    if(x==0){
        cout<<"The array is empty."<<endl;
    }
    else if(x==1){
       cout<<"The array is not empty."<<endl;
    }
    return 0;
}