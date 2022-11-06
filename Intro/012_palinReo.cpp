/*
Palindrome Reorder
https://cses.fi/problemset/task/1755

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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int n=s.length();
    unordered_map<char,int>m;

    for(int i=0;i<n;i++){
        m[s[i]]++;
    }

    int oddCnt=0;
    char oddChar;

    for(auto it:m){
        if(it.second%2==1){
            oddCnt++;
            oddChar=it.first;
        }
    }

    string ans="";
    if(oddCnt>1 ||(oddCnt==1 && n%2==0))
        ans="NO SOLUTION";
    else{
        string first="";
        string second="";
        for(auto it:m){
            string str(it.second/2,it.first);

            first=first+str;
            second=str+second;
        }

        if(oddCnt==1)
            ans=first+oddChar+second;
        else
            ans=first+second;
    }

    cout<<ans;

    return 0;
}