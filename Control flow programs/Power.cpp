#include<bits/stdc++.h>
using namespace std;

int main() 
{ 
    double a=4.5,b=8.9;
    double result=pow(a,b);
    cout<<result<<endl;

    int number=68;
    for(int i=1;i<=number;i++) {
        if(number%i==0) {
            cout<<i<<" ";
        }
    }
}