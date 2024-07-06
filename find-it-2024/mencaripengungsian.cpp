#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

vector<ll> prefsum; 

void calculateprefsum(const vector<ll>& x) {
    prefsum.resize(x.size() + 1, 0);
    for (ll i = 0; i < x.size(); ++i) {
        prefsum[i + 1] = prefsum[i] + x[i];
    }
}

ll diff(const vector<ll>& x, ll l, ll r) {
    ll n = x.size();
    auto low = lower_bound(x.begin(), x.end(), l) - x.begin();
    auto high = upper_bound(x.begin(), x.end(), r) - x.begin();

    ll lsum = prefsum[low];
    ll rsum = prefsum[n] - prefsum[high]; 

    ll leftCount = low;
    ll rightCount = n - high;

    ll total = (l * leftCount - lsum) + (rsum - r * rightCount);
    return total;
}

ll same(const vector<ll>& x, ll l) {
    ll total = 0;
    for (ll num : x) {
        if (num != l) {
            total += abs(l - num);
        }
    }
    return total;
}

void solve(){
    ll n, q;
    cin >> n >> q;
    vector<ll> x(n);
    for (ll i = 0; i < n; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    calculateprefsum(x);

    while (q--) {
        ll l, r;
        cin >> l >> r;
        ll total = (l != r) ? diff(x, l, r) : same(x, l);
        cout << total << endl;
    }
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}


