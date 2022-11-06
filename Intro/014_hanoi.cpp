#include <bits/stdc++.h>
using namespace std;

static int step;
vector<pair<int,int>>v;

void TOH(int n,int A,int B,int C)
{
    if(n>0){
        TOH(n-1,A,C,B);
        ++step;
        v.push_back({A,C});
        TOH(n-1,B,A,C);
    }
}

int main(){
    int n;
    char A,B,C;
    
    // A-Source , B-Auxiliary , C-Destination

    // cout<<"Enter the number of disks: ";
    cin>>n;

    TOH(n,1,2,3);

    // cout<<"Total Steps Required: "<<step<<endl;
    cout<<step<<"\n";

    for(int i=0;i<step;i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }

    return 0;
}