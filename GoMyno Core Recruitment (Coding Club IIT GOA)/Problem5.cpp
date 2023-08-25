// Jai shree ram
// Hard Problem
#include<bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &x : v)cin >> x;
    int ans = 0;
    while(v.size() > 1){
        vector<int> ne;
        int m = v.size();
        for(int i = 0; i < m; i+=2){
            if((v[i]+1)/2 != (v[i+1] + 1)/2){
                cout << -1 << '\n';
                return;
            }
            ne.push_back((v[i]+1)/2);
            ans += (v[i] > v[i+1]);
        }
        v = ne;
    }
    cout << ans << '\n';
}
 
int main(){
    int t; cin >> t;
    while(t--)solve();
 
}
