#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void solve(){
    ll n;
    cin >> n;
    if(n == 1) cout << 3 << endl;
    else{
        n -= 2;
        ll a = n/3;
        n %=3;
        if(n==0) cout <<4*a+5 << endl;
        else if(n==1) cout << 4*a+7 <<endl;
        else cout << 4*a+8 << endl;
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