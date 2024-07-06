#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define fi first
#define si second

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    int mx = 0;
    for(int i = 0; i < n - 1; i++) mx = max(mx, a[i]);
    cout << mx + a[n - 1] << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
