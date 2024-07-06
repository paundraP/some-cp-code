#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void solve(){
    ll n, k;
    cin >> n >> k;
    if(k&1) no
    else{
        k /= 2;
        vector<int> a(n);
        for(int i = 1; i <= n; i++) a[i - 1] = i;
        ll d;
        for(int i = 0; i < n / 2 && k > 0; i++){
            d = min(k, n - i * 2 - 1);
            k -= d;
            swap(a[i], a[i + d]);
        }
        if (k > 0) no
        else{
            yes
            for(int i : a) cout << i << " ";
            cout << endl;
        }
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