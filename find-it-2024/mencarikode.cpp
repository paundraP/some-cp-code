#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

int longestPalindrome(int n, const string& s) {
    if (n == 0) return 0;
    
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    
    int maxLength = 1; 
    int start = 0;
    
    for (int i = 0; i < n; ++i) {
        dp[i][i] = true;
    }
    
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }
    
    for (int k = 3; k <= n; ++k) {
        for (int i = 0; i < n - k + 1; ++i) {
            int j = i + k - 1;
            
            if (dp[i + 1][j - 1] && s[i] == s[j]) {
                dp[i][j] = true;
                
                if (k > maxLength) {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }
    
    return s.substr(start, maxLength).length();

}
void solve(){
    int n;
    string s;
    cin >> n >> s;

    cout << longestPalindrome(n, s) << endl;
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
