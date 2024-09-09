#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
    map<string,int>mp;
    mp["One"]=1;
    mp["Two"]=2;
    mp["Three"]=3;
    mp["Four"]=8;

    cout<<"Key : "<<mp["One"]<<endl;
    cout<<"Key : "<<mp["Two"]<<endl;
    cout<<"Key : "<<mp["Three"]<<endl;
    cout<<"key : "<<mp["Four"]<<endl;

    if(mp.count("Three")>0) {
        cout<<"Key Four is in the map."<<endl;
    }
    else{
        cout<<"Its not in the map."<<endl;
    }
    return 0;
}

