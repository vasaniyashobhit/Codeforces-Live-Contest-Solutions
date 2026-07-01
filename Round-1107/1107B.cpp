#include <bits/stdc++.h>
using namespace std;

// Shobhit Vasaniya

// codeforces round 1107 div-3 problem B

bool check(long long x, long long y)
{
    long long c = x * y;

    set<int> st;
    while (c)
    {
        int i = c % 10;
        st.insert(i);
        c = c / 10;
    }

    set<int> sty;
    while (y)
    {
        int i = y % 10;
        sty.insert(i);
        y /= 10;
    }

    if (st.size() <= 2 && sty.size() <= 2)
        return true;
    return false;
}



int main()
{
    int t;
    cin >> t;
    map<long long, long long> mp;
    while (t--)
    {
        long long x;
        cin >> x;

        if(mp.find(x)!=mp.end()){
            cout<<mp[x]<<endl;
            continue;
        }
        
        for (long long y = 11; y <= 1e4; y+=11)
        {
            if (check(x, y))
            {
                cout<<y<<endl;
                mp[x] = y;
                mp[y] = x;
                break;
            }
        }
    }

    return 0;
}