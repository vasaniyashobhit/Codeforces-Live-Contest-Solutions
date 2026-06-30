#include<bits/stdc++.h>
using namespace std;

// By Shobhit Vasaniya

// codeforces contest div-2 1106

// Probleml B

void solve(){
    long long n; cin>>n;
    long long ans = 0;

    for(long long a=1;a<=n;a++){
        for(long long i=1;i*i<=a;i++){
            if(a%i==0){
                long long b1 = i;
                long long b2 = a/i;

                ans += n/b1;
                if(b1 != b2) ans += n/b2;
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}