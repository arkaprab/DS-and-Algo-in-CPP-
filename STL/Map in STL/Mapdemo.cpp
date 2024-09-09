#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
    map<string,int>mp;
    mp["Arkaprabha"]=2;
    mp["Mandril"]=10;
    mp["Sounak"]=17;
    mp["Dipanjan"]=98;

    map<string,int>::iterator i;
    for(i=mp.begin();i!=mp.end();i++) {
        cout<<"Key:"<<i->first<<" "<<"Value:"<<i->second;
        i++;
    }
    cout<<"Size of the map:"<<mp.size()<<endl;
    return 0;
}