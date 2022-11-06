/*
Gray code
https://cses.fi/problemset/task/2205
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void printVector(vector<int>v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<' ';
    }
}

void generateGraycode(int n){
    for(int i=0;i<pow(2,n);i++){
        string s=bitset<32>(n).to_string().substr(32 - log2(n));
        s=s.substr(2);
        string ans="";
        for(int i=0;i<n-s.length();i++)
            ans+='0';
        
        cout<<ans+s;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    
    generateGraycode(n);


    return 0;
}