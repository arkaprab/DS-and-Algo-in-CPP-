#include<iostream>
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
int main() 
{ 
    int number=16;
    bool flag=isprime(number) ;
    if(flag == true) {
        cout<<"Prime."<<endl;
    }
    else{
        cout<<"Not a prime."<<endl;
    }
    return 0;
}