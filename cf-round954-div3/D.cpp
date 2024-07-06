#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <bits/stdc++.h>
using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

ll dp[25][25];

ll compare(ll x, ll y){
    ll ans = ( x + y > x * y) ? x * y : x + y;
    return ans;
}

ll dfs(int n, string s, int pos, int it){
    if (it == 0) return stol(s.substr(pos));
    if (dp[pos][it]!= -1) return dp[pos][it];
    ll temp = numeric_limits<ll>::max();
    for (int i = pos; i < n - it; i++) {
        ll x = stol(s.substr(pos, i - pos + 1));
        ll y = dfs(n, s,i+1,it-1);
        temp = min(temp, compare(x, y));
    }
    return dp[pos][it] = temp;
}

void solve(){
    int n;
    string s;
    cin >> n >> s;
    memset(dp, -1, sizeof(dp));
    cout << dfs(n, s, 0, n - 2) << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}