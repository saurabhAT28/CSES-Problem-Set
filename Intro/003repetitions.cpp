#include <bits/stdc++.h>
using namespace std;

// int max(int a,int b){
//     if(a>b)
//         return a;
//     return b;
// }


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    // cout<<s;
    int n=s.length();
    int repeat=1;
    int maxRepeat=1;

    // for(int i=0;i<n;i++)
    //     cout<<s[i]<<" ";
    

    for(int i=0;i<n-1;i++){
        if(s[i+1]==s[i]){
            repeat++;
            maxRepeat=max(repeat,maxRepeat);
        }
        else{
            maxRepeat=max(repeat,maxRepeat);
            repeat=1;
        }
    }
    // cout<<n;

    cout<<maxRepeat;

    return 0;
}