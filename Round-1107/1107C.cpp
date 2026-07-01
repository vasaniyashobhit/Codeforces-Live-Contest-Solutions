#include<bits/stdc++.h>
using namespace std;

// Shobhit Vasaniya

// codeforces round 1107 div-3 problem C

void solve(){
    int n; cin>>n;
    string s; cin>>s;

    if(s[0]=='1'){
        bool ans = true;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0' && s[i+1]=='1'){
                ans = false;
                break;
            }
        }
        if(ans==true){
            if(s[n-1]=='0') cout<<2<<endl;
            else cout<<1<<endl;
        }
        else cout<<1<<endl;
    }
    else{
        bool ans = true;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1' && s[i+1]=='0'){
                ans = false;
                break;
            }
        }
        if(ans==true){
            if(s[n-1]=='1') cout<<2<<endl;
            else cout<<1<<endl;
        }
        else cout<<1<<endl;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}