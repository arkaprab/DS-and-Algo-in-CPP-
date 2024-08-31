#include<iostream>
using namespace std;

int main() { 
    float c=35.6,fa;
    fa=(c-32.0) * 5.0 / 9.0;
    cout<<"In farenheit ->"<<fa<<endl;

    int p=34000;
    float r=8.6,t=5;

    float si=(p*r*t)/100;
    cout<<"Simple Interest->"<<si<<endl;
    return 0;
}