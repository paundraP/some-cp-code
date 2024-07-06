#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void solve(){
    int n, m, ans = 0;
    cin >> n >> m;
    if(n < m){
        swap(n, m);
    }
    for(int i = 1; i < n; i++){
        ans += i;
    }
    for(int i = 0; i < m; i++){
        ans += n + i * 2;
    }
    cout << ans << endl;
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
/*
int maks = n * m;
int mins = 1;

n < m : angka terbesar 
*/