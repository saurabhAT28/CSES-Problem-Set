#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    
    long long a[n];
    long long moves=0;

    for(long long i=0;i<n;i++){
        cin>>a[i];
    }

    for(long long i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            moves+=abs(a[i]-a[i+1]);
            a[i+1]=a[i];
        }
    }

    cout<<moves;

    return 0;
}