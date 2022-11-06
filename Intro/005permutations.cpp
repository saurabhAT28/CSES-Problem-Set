#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    if(n==1){
        cout<<1;
    }
    else if(n==2 || n==3){
        cout<<"NO SOLUTION";
    }
    else{
        int i=2;
        
        while(i<=n){
            cout<<i<<" ";
            i+=2;
        }
        i=1;
        while(i<=n){
            cout<<i<<" ";
            i+=2;
        }
        
    }

    return 0;
}