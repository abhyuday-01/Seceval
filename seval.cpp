#include<bits/stdc++.h>
using namespace std;


int main(){
    map<char,int> c;
    string s;
    getline(cin,s);
    for(auto i:s){
        if(isalpha(i)){
            c[i]++;
        }
    }
    for(auto i:c){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}
