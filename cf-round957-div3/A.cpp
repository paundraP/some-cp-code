#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    int maxBanana = a * b * c;
    for (int i = 0; i <= 5; ++i) {
        for (int j = 0; j <= 5 - i; ++j) {
            int k = 5 - i - j;
            int newA = a + i;
            int newB = b + j;
            int newC = c + k;
            maxBanana = max(maxBanana, newA * newB * newC);
        }
    }
    
    cout << maxBanana << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}