#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void solve(){
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int minimum = numeric_limits<int>::max();
    for(int i = 0; i <= 10; i++){
        int total = abs(i - x1) + abs(i - x2) + abs(i - x3);
        minimum = min(minimum, total);
    }
    cout << minimum << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}