#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define MOD 1000000007 // 998244353
const string yes = "YES";
const string no = "NO";

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll tt;
    cin >> tt;

    for(ll count = 1; count <= tt; count++)
    {
        ll n,i,j;
        cin>>n;
        vector<ll>v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<ll,ll>mp;
        bool b=true;
        vector<ll>ans;
        for(i=0;i<n;i++)
        {
            if(mp[v[i]]>0){b=false;break;}
            mp[v[i]]=1;
            ans.push_back(v[i]);
            while(i<n-1 && v[i]==v[i+1])
            {
                i++;
            }

        }
        if(b)
        {
            cout << "Case #" << count << ": ";
            for(auto x:ans){cout<<x<<" ";}
            cout<<endl;
        }
        else
        {
            cout << "Case #" << count << ": IMPOSSIBLE\n";
        }
    }

    return 0;
}
