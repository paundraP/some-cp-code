#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void solve(){
    ll x;
    cin >> x;
    vector<int> res(31, 0);
    for (int i = 0; i < 30; i++) {
        if (1ll & (x >> i)) {
            if (res[i]) {
                res[i + 1] = 1;
                res[i] = 0;
            } else if (i > 0) {
                if (res[i - 1] == 1) {
                    res[i + 1] = 1;
                    res[i - 1] = -1;
                } else {
                    res[i] = 1;
                }
            } else if (i == 0) {
                res[i] = 1;
            }
        }
    }
    cout << 31 << '\n';
    for (int i = 0; i <= 30; i++) {
        cout << res[i] << ' ';
    }
    cout << '\n';
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}