#include<bits/stdc++.h>
using namespace std;

// Shobhit Vasaniya

// codeforces round 1107 div-3 problem A

void solve(){
    int n; cin>>n;
    vector<long long> a(n);
    vector<long long> b(n);
    for(long long &it:a) cin>>it;
    for(long long &it:b) cin>>it;

    for(int i=n-1;i>=1;i--){
        if(a[i]<=b[i]) continue;
        a[i-1] += (a[i]-b[i]);
    }

    if(a[0]<=b[0]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}