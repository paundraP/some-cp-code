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
    int xgenap = 2, xganjil = 3, finalgenap = 0, finalganjil = 0;
    while(xgenap <= n){
        finalgenap += xgenap;
        xgenap += 2;
    }
    while(xganjil <= n){
        finalganjil += xganjil;
        xganjil += 3;

    }
    int ans = (finalgenap > finalganjil) ? 2 : 3;
    cout << ans << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}