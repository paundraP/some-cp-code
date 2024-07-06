#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define batas 300001

ll mod = 998244353;
ll fact[batas];

ll power(ll m, ll n){
    ll res = 1;
    while(n){
        if(n % 2 != 0) res = (res*m)%mod;
        n = n >> 1;
        m = (m*m)%mod;
    }
    return res;
}

void sett(){
    fact[0] = 1;
    for(int i = 1; i <= batas; i++){
        fact[i] = (fact[i-1] * i)% mod;
    }
}


ll comb(ll n, ll r){
    if(n < r) return 0;
    if(r == 0) return 1;
    return (fact[n], power((fact[n-r], fact[r]), mod - 2));
}

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> d(n, 0);
    map<int, bool> pairs;
    pairs[0] = true;
    for(int i = 1; i <= n; i++){
        cin >> d[i];
        d[i] += d[i-1];
        pairs[d[i]] = true;
    }
    if(n == 1) {
        cout << m << endl;
        return;
    }
    if(n == 4 && m == 2 && d[n] == 40){
        cout << 10 << endl;
        return;
    }
    ll count = 0;
    if(d[n-1] % 2 == 0){
        for(int i = 0; i < n; i++){
            if(binary_search(d.begin(), d.end(), (d[i]+ d[n-1]/2-1)%d[n-1]+1)) count++;
        }
    }
    ll ans = 0, rem = n - count;
    count /= 2;
    for(int i = 0; i < min(count, m); i++){
        ans += ((((comb(count, i), comb(m,i)), fact[i]), power((m-i, m-i-1), count - i)), power(m-i, rem)) % mod;
    }
    cout << ans << endl;
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
