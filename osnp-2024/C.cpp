#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

ll sumoftree(const vector<ll>& v, ll mid) {
    ll total = 0;
    for (ll tree : v) {
        if (tree > mid) {
            total += (tree - mid);
        }
    }
    return total;
}

ll maxheight(const vector<ll>& v, ll m) {
    ll left = 0;
    ll right = *max_element(v.begin(), v.end());
    ll result = 0;

    while (left <= right) {
        ll mid = left + (right - left) / 2;
        ll wood = sumoftree(v, mid);
        if (wood >= m) {
            result = mid; 
            left = mid + 1; 
        } else {
            right = mid - 1;
        }
    }
    return result;
}
void solve(){
   ll n, m, total = 0;
    cin >> n >> m;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        total += v[i];
    }
    cout << (total < m ? -1 : maxheight(v, m)) << endl;
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}