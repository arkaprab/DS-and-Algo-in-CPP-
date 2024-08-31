#include<bits/stdc++.h>
using namespace std;

bool isprime(int num) 
{
    for(int i=2;i<num;i++) {
        if(num%i==0) {
            return false;
        }
    }
    return true;
}
bool checkneon(int num)
{
    int sq=pow(num,2);
    int p=sq;
    int d;
    int sum=0;
    while(sq!=0) {
        d=(sq%10);
        sum=sum+d;
        sq=sq/10;
    }
    if(sum==sq){
        return true;
    }
    return false;
}
int main() 
{ 
    int r1=1,r2=500;
    for(int i=r1;i<=r2;i++) {
        if(isprime(i)) {
            cout<<i<<endl;
        }
    }
    bool flag=checkneon(9);
    if(flag)
    {
        cout<<"Neon number."<<endl;
    }
    else{
        cout<<"Not a neon number."<<endl;
    }
    return 0;
}