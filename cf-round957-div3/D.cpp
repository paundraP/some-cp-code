#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void solve(){
    int a, b, final;
    cin >> a >> b >> final;
    
    string monk;
    cin >> monk;
    
    int curr = b - 1;
    int rem = 0, cant = 0;
    
    for (char &act : monk) {
        if (act == 'L') {
            curr = b;  
        } else if (act == 'W') {
            if (curr <= 0) {
                rem++;
            }
        } else {  
            if (curr <= 0) {
                cant++;
            }
        }
        curr--;
    }
    
    if (rem > final) {
        cant++;
    }
    if(cant != 0) no
    else yes
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}