// Two Knights (Introductory Problems)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    for(ll k=1;k<=n;k++){
        cout<<k*k*(k*k-1)/2-4*(k-1)*(k-2)<<"\n";
    }

    return 0;
}












