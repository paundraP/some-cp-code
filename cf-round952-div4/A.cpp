#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void solve(){
    string a, b;
    cin >> a >> b;
    string ansA = a, ansB = b;
    ansA[0] = b[0];
    ansB[0] = a[0];
    cout << ansA << " " << ansB << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
