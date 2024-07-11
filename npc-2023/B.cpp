#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    double ans = 0;
    for(auto &it : a) cin >> it;
    for(int i = 99; i >= 0; i--) {
        ans = a[i%n] + 1.0 / ans;
    }
    cout << fixed << setprecision(6) << ans << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}