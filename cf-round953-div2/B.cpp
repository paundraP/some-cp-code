#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define fi first
#define si second

void solve(){
    ll n, a, b;
    cin >> n >> a >> b;
    if(b <= a) cout << n * a << endl;
    else{
        ll k = min(b - a + 1, n);
        cout << (b - k + 1) * n + k * (k - 1) / 2 << endl;
    }
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
