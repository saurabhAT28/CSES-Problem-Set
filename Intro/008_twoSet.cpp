#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    ll sum=n*(n+1)/2;

    if(sum%2==1)
        cout<<"NO\n";
    else{
        cout<<"YES\n";
        vector<ll>a;
        vector<ll>b;

        ll ans=sum/2;

        for(ll i=n;i>=1;i--){
            if(i<=ans){
                a.push_back(i);
                ans-=i;
            }
            else
                b.push_back(i);
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        cout<<a.size()<<"\n";
        for(ll i=0;i<a.size();i++)
            cout<<a[i]<<" ";
        cout<<"\n";
        cout<<b.size()<<"\n";
        for(ll i=0;i<b.size();i++)
            cout<<b[i]<<" ";
        cout<<"\n";
    }



    return 0;
}