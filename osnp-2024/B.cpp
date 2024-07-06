#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void solve(){
    ll b, c, d, cnt = 0;
    cin >> b >> c >> d;
    ll sisa = c - d;
    if(sisa == 0) cout << max(0ll, b-c) << endl;
    else{
        for(ll i = 1; i * i <= sisa; i++){
            if(sisa % i == 0){
                ll temp = sisa / i;
                if(i > d && i <= b) cnt++;
                if(i != temp && temp > d && temp <= b)cnt++;
            }
        }
        cout << cnt << endl;
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