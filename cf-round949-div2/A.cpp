#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";



void solve(){
    ll l, r;
    cin >> l >> r;
    ll ans = 1, cnt = 0;
    while((1 << ans) <= r){
        ans++;cnt++;
    }
    cout << cnt << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}