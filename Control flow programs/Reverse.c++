#include<iostream>
using namespace std;

int main()
{ 
    int num=4444;
    int rev=0,d;
    while(num!=0) {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    cout<<"Reverse->"<<rev;

    int newnum=num;
    cout<<"\n"<<endl;
    if(newnum == rev) {
        cout<<"Palindrom number."<<endl;
    }
    else{
        cout<<"Not a palindrome number."<<endl;
    }
    return 0;
}