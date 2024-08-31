#include<bits/stdc++.h>
using namespace std;

bool isarmstrong(int num)
{
    int temp=num;
    int d,sum=0;
    while(temp!=0) {
        d=temp%10;
        sum=sum+pow(d,3);
        temp=temp/10;
    }
    if(num==sum) {
        return 1;
    }
    return 0;
}
int main() 
{ 
    if(isarmstrong(153) == true) {
        cout<<"Armstrong number."<<endl;
    }
    else{
        cout<<"Not an armstrong number."<<endl;
    }
}