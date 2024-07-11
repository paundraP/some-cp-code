#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    
    int permutation[n];
        for (int i = 0; i < n; ++i) {
        if (i < n - m) {
            permutation[i] = n - i;  // Fill descending from n to n - m + 1
        } else {
            permutation[i] = i - (n - m) + 1;  // Fill ascending from 1 to m
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << permutation[i] << " ";
    }
    cout << "\n";
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}