#include<iostream>
using namespace std;

int main() 
{ 
    int number=100;
    int table=2;
    for(int i=1;i<=10;i++) {
        cout<<2*i<<" "<<endl;
    }
    int sum=0;
    for(int i=1;i<=number;i++) {
        sum=sum+i;
    }
    cout<<"Sum->"<<sum<<endl;
    int factorial=100;
    double fact=1;
    for(int i=1;i<=factorial;i++) {
        fact=fact*i;
    }
    cout<<"Factorial of the number:"<<fact<<endl;
    return 0;
}