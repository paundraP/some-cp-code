#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define mod 998244353;

void solve(){
    ll n, m, count = 1;
    cin >> n;
    vector<ll> a(n), b(n);
    for(auto &it : a) cin >> it;   
    for(auto &it : b) cin >> it;
    cin >> m;   
    vector<ll> c(m), d(m);
    for(auto &it : c) cin >> it;   
    for(auto &it : d) cin >> it;
    map<int, int> mpx, mpy;
    for(int i = 0; i < n; i++) mpx[a[i]] = b[i];
    for(int i = 0; i < m; i++) mpy[c[i]] = d[i];
    for(auto &it : mpy){
        if(it.si > mpx[it.fi]){
            count = 0;
            break;
        }else if(it.si < mpx[it.fi]) count = count * 2 % mod;
    }
    for(auto &it : mpx){
        if(mpy[it.fi] == 0) count = count * 2 % mod;
    }
    cout << count << endl;
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
N : banyaknya faktorisasi prima X
A : Bilangan bilangan prima didalam faktorisasi prima X
B : Pangkat dari A
M : banyaknya faktorisasi prima Y
C : Bilangan bilangan prima didalam faktorisasi prima Y
D : Pangkat dari C
*/