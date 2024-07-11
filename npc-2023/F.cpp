#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

// ll gulunganMaksimal(vector<ll> &gulungan, int x){
//     ll curmaks = gulungan[0], maks = gulungan[0];
//     for(int i = 1; i < x; i++){
//         curmaks = max(gulungan[i], curmaks + gulungan[i]);
//         if(curmaks > maks) maks = curmaks;
//     }
//     return maks;
// }

void solve(){
    ll n, curr = LLONG_MIN, x; cin >> n;
    string ans, legend;
    for(int i = 0; i < n; i++){
        cin >> legend;
        cin >> x;
        vector<ll> gulungan(x);
        for(auto &it : gulungan) cin >> it;
        ll curmaks = 0 , maks = 0;
        for(int i = 0; i < x; i++){
            curmaks = max(0ll, curmaks + gulungan[i]);
            maks = max(maks, curmaks);
        }
        if (maks > curr) {
            curr = maks;
            ans = legend;
        }
        // cout << legend << " " << maks << endl;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio (NULL); cin. tie (NULL) ;cout. tie (NULL);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}