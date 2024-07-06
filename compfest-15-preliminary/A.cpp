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
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v[i] = abs(x);
    }
    sort(v.begin(), v.end());
    cout << v[0] << endl;
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}