#include<bits/stdc++.h>
using namespace std;

// By Shobhit Vasaniya

// codeforces contest div-2 1106

// Problem A


void solve(){
    int n,c; cin>>n>>c;
    vector<int> a(n);
    vector<int> b(n);

    for(int &it:a) cin>>it;
    for(int &it:b) cin>>it;

    bool re = true;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]) re = false;
    }

    int costwre = 0;
    for(int i=0;i<n;i++){
        costwre += (a[i]-b[i]);
    }

    int costre = c;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    bool pos = true;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]) pos = false;
    }

    for(int i=0;i<n;i++){
        costre += (a[i]-b[i]);
    }

    if(pos==false){
        cout<<-1<<endl;
    }
    else{
        if(re==true){
            cout<<min(costre,costwre)<<endl;
        }
        else{
            cout<<costre<<endl;
        }
    }

    return;

}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}