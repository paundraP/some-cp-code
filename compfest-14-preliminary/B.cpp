#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void solve(){
    ll n,m;
    cin>>n>>m;
    ll p[n+5];
    for(int i = 0; i < n; i++){
        cin>>p[i];
    }
    sort(p, p+n);
    ll ans = 0, player = n-1, tim = 0;
    for(int i = 0; i < n; i++){
        tim += p[player];
        if(tim>m){
            ans++;
            tim = 0; player--;
        }
    }
    cout<<ans<<endl;
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}