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
    cin>>n;
    ll presum = 0, maxsum = 0, count = 0;
    while(n--){
        ll x; cin>>x;
        presum +=x;
        maxsum = max(x, maxsum);
        if(presum == maxsum*2) count++;
    }
    cout << count << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}

// 1 1 2 0
// sum = 1, mx = 1, 1 == 2 !
// sum = 2, mx = 1 2 == 2 /
// sum = 4, mx 2 4 == 4 /
// sum = 4 mx 2 4 == 4 /
