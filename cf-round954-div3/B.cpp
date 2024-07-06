#include<bits/stdc++.h>

using ll = long long int;
using ld = long double;
using namespace std;
#define fi first
#define si second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void stabilization(vector<vector<int>> &a, int n, int m){
    vector<vector<bool>> cur(n, vector<bool>(m, true));
    bool temp = true;
    while (temp) {
        temp = false;
        vector<vector<bool>> next(n, vector<bool>(m, false));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (!cur[i][j]) continue;

                int top = (i > 0) ? a[i - 1][j] : 0;
                int left = (j > 0) ? a[i][j - 1] : 0;
                int bottom = (i < n - 1) ? a[i + 1][j] : 0;
                int right = (j < m - 1) ? a[i][j + 1] : 0;

                int max_neighbor = max({top, left, bottom, right});
                if (a[i][j] > max_neighbor) {
                    a[i][j] = max_neighbor;
                    temp = true;
                    if (i > 0) next[i - 1][j] = true;
                    if (j > 0) next[i][j - 1] = true;
                    if (i < n - 1) next[i + 1][j] = true;
                    if (j < m - 1) next[i][j + 1] = true;
                }
            }
        }
        cur = next;
    }
}

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >>a[i][j];
    }

    stabilization(a, n, m);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
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