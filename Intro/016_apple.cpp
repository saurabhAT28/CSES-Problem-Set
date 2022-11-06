/*
Apple Division
https://cses.fi/problemset/task/1623
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll findMin(ll a[],ll n,ll curSum,ll sum){
    if(n==0)
        return abs(sum-curSum-curSum);
    
    return min(findMin(a,n-1,curSum+a[n-1],sum),findMin(a,n-1,curSum,sum));
}

ll minDiffernce(ll a[], ll n)
{
    if (n == 2)
        return abs(a[0] - a[1]);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
        sum = sum + a[i];

    return findMin(a,n,0,sum);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];

    cout<<minDiffernce(a,n);

    return 0;
}