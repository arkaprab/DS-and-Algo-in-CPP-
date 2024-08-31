#include<iostream>
using namespace std;

int main()
{
    int year=2002;
    if(year%400==0 && year%100==0 && year%4==0) {
        cout<<"Leap Year."<<endl;
    }
    else{
        cout<<"Not a leap year."<<endl;
    }
    return 0;
}