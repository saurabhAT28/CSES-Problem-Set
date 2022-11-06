// Creating String

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    vector<string>v;

    sort(s.begin(),s.end());
    
    do{
        v.push_back(s);
    }while(next_permutation(s.begin(),s.end()));

    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<"\n";

    return 0;
}