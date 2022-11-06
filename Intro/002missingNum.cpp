#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m;
    long long sum=0;
    cin>>n;

    long long actualSum=(n*(n+1))/2;

    for(int i=0;i<n-1;i++){
        cin>>m;
        sum+=m;
    }

    cout<<actualSum-sum<<"\n";

    return 0;
}