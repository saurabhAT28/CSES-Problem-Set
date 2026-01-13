/*
Collecting Numbers
https://cses.fi/problemset/task/2216
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

    int n,x;
    cin>>n;

    int l=1;
    int idx[n+1]={0};

    for(int i=1;i<=n;i++){
        cin>>x;
        idx[x]=i;
    }

    x=1;
    int ans=1;
    for(int i=1;i<=n;i++){
        if(x>idx[i])
            ans++;
        x=idx[i];
    }

    cout<<ans;

    return 0;
}