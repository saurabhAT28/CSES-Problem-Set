#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll trailZero(ll n){
    ll ans=0;
    ll p=5;
    while(n/p>0){
        ans+=n/p;
        p*=5;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    cout<<trailZero(n);

    return 0;
}