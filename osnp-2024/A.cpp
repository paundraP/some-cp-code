#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";


void solve(){
    string s;
    cin >> s;
    int maks = 0;
    string str[] = {"OSN", "ONS", "NSO", "SNO", "NOS", "SON"};
    for(int i = 0; i < 6; i++){
        string temp = str[i];
        int cur = 0;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == temp[cur % 3]){
                cur++;
            }
        }
        maks = max(maks, cur);
    }
    if(maks < 3){
        cout << -1 << '\n';
    }else{
        cout << maks << '\n';
    }
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}